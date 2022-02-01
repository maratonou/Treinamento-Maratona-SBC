#include "bits/stdc++.h"

using namespace std;

#define forn(i, n) for (int i = 0; i < n; i++)
 
using ll = long long;
using f64 = double;
using ii = pair<int, int>;
using ull = unsigned long long;
using vi = vector<int>;
using vii = vector<ii>;


const string ENDL = "\n";
#define idx(x) (x-1)


void solve()
{
	int n; cin >> n;
    vector<vii> grafinho(n+1);
    for (int i = 0; i < n-1; i++)
    {
        int u, v;
        cin >> u >> v;
        grafinho[u].emplace_back(v, 0);
        grafinho[v].emplace_back(u, 0);
    }
    vi s(n);
    vi g(n);
    for (int i = 0; i < n; i++) cin >> s[i];
    for (int i = 0; i < n; i++) cin >> g[i];

    // dfs counting height an flipping bits

}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) solve();
 	return 0;
}