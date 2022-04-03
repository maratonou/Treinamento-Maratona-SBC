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
	ll n,s;
    cin >> n >> s;
    vi a(n);
    forn(i, n) cin >> a[i];
    ll l, r;
    l = 0;
    r = 0;
    ll x = 0;
    ll ans = n+1;
    while (r < n)
    {
        x+=a[r];
        while (x-a[l] >= s)
        {
            x -= a[l];
            l++;
        }
        if (x >= s)
            ans = min(ans, r-l+1);
        r++;
    }
    cout << (ans != n+1 ? ans : -1) << ENDL;
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	// cin >> t;
	while(t--) solve();
 	return 0;
}