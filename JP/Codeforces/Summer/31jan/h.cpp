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

int marks[200000];
int vstd[200000];

int n;
int tot = 0;

vi alturas;
vi g[2000000];

f64 dfs(int v = 0, int pai = -1)
{
    f64 sum = 0;
    for (auto u: g[v])
        if (u != pai)
            sum += dfs(u, v)+1;
    return sum ? sum / (sz(g[v]) - (pai != -1)) : 0;
}
void solve()
{
    cin >> n;

    for (int i = 0; i < n-1; i++)
    {
        int u, v;
        cin >> u >> v;
        u--;v--;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    f64 sum = dfs(0, -1);
    cout << setprecision(10) << fixed << sum << ENDL;
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	// cin >> t;
	while(t--) solve();
 	return 0;
}