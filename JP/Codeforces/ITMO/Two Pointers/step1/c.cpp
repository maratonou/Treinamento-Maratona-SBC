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

void solve()
{
	int n, m; cin >> n >> m;
    vi a(n);
    vi b(m);
    forn(i, n) cin >> a[i];
    forn(i, m) cin >> b[i];
    int i = 0, j = 0;
    ll ans = 0;
    map<int, ll> mapa;
    while (j < m)
    {
        if(i < n && mapa[a[i]] == 0)
        {
            // cout << b[j] << " " << a[i] << " j = " << j << ENDL;
            while (b[j] > a[i] && i < n)
            {
                i++;
                if (i == n)
                    break;
            }
            while (b[j] == a[i])
            {
                mapa[a[i]]++;
                i++;
                if(i == n)
                    break;
            }
        }
        ans += mapa[b[j]];
        j++;
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