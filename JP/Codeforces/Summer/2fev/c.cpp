#include "bits/stdc++.h"

using namespace std;

#define forn(i, n) for (int i = 0; i < n; i++)
 
using ll = long long;
using f64 = double;
using ii = pair<int, int>;
using ull = unsigned long long;
using vi = vector<int>;
using vii = vector<ii>;
using ugraph = vector<vi>;
using wgraph = vector<vii>;

#define sz(x) x.size()

const string ENDL = "\n";

int vstd[2000];
int dp[2000];

int ans;

void dfs(wgraph &g, int start, deque<int> &order)
{
    vstd[start] = 1;

    for (auto u: g[start])
        if (vstd[u.first] == 0)
            dfs(g, u.first, order);
    order.push_front(start);

}

deque<int> topsort(wgraph &g, int &n)
{
    deque<int> order;

    forn (i, n)
        if (vstd[i] == 0)
            dfs(g, i, order);
    return order;
}

int lp_dag(wgraph&g, int &n, int start)
{
    forn(i, n) {vstd[i] = 0; dp[i] = INT_MIN;}
    deque<int> order;
    order = topsort(g, n);
    dp[start] = 0;
    // forn(i, n) {cout << order[i]+1 << " ";}
    // cout << ENDL;
    for (int i = 0; i < n; i++)
    {
        int node = order[i];
        if (dp[node] != INT_MIN)
        {
            for(auto u: g[node])
            {
                dp[u.first] = max(dp[u.first], dp[node] + u.second);
            }
        }
    }
    int ans = 0;
    forn(i, n) {ans = max(ans, dp[i]);}
    return ans;
}

void solve()
{
	int n; cin >> n;
    int m; cin >> m;

    wgraph g(n);
    for (int i = 0; i < m; i++)
    {
        int s, t, c;
        cin >> s >> t >> c;
        g[--s].emplace_back(--t, c);
    }
    int ans = 0;
    forn(i, n)
    {
        ans = max(ans, lp_dag(g, n, i));
            
    }
    cout << ans << ENDL;
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	// cin >> t;
	while(t--) solve();
 	return 0;
}