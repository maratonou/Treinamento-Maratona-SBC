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

int v[300000];

void solve()
{
	int n; cin >> n;
    map<int, int> mapa;
    for(int i = 1; i <= n; i++)
    {
        cin >> v[i];
        mapa[v[i]] = i;
    }
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        if (v[i] != i)
        {
            for (int j = v[i]; j > i; j--)
            {
                // cout << "j-1...j => " << j-1 << " " << j << ENDL;
                // cout << "v[mapa...] => " << v[mapa[j-1]] << " " << v[mapa[j]] << ENDL;
                // cout << "mapa... => " << mapa[j-1] << " " << mapa[j] << ENDL;
                swap(v[mapa[j]], v[mapa[j-1]]);
                swap(mapa[j], mapa[j-1]);
                ans++;
                
            }
        }
    }
    // for(int i = 1; i <= n; i++)
    //     cout << v[i] << " ";
    // cout << ENDL;
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