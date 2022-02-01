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
using dgraph = vector<vii>;

#define sz(x) x.size()

const string ENDL = "\n";

int vstd[200000];

int max_node = 0;
int max_h = INT_MIN;
vi g[2000000];

void dfs(int v,int count)
{
    vstd[v] = 1;
    count++;
    for (auto u: g[v])
    {
        if (vstd[u] == 0)
        {
            if (count >= max_h)
            {
                max_h = count;
                max_node = u;
            }
            dfs(u, count);
        }
    }
}
void solve()
{
    int n;
    cin >> n;
    if (n == 1)
    {
        cout << "0\n";
        return;
    }

    for (int i = 0; i < n-1; i++)
    {
        int u, v;
        cin >> u >> v;
        u--;v--;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    dfs(0, 0);
    for(int i = 0; i < n+1; i++) vstd[i] = 0;
    max_h = -1;
    dfs(max_node, 0);

    cout << max_h << ENDL;

}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	// cin >> t;
	while(t--) solve();
 	return 0;
}