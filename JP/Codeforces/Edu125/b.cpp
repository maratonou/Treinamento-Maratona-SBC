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
	ll n, b, x, y; cin >> n >> b >> x >> y;
    vi a(n+1, 0);
    ll sum = 0;
    for(int i = 1; i <= n; i++)
    {
        if (a[i-1] + x > b)
        {
            a[i] = a[i-1]-y;
        }
        else
        {
            a[i] = a[i-1] + x;
        }
        sum += a[i];
    }
    // forn(i, n) cout << a[i] << " ";
    // cout << ENDL;
    cout << sum << ENDL;
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) solve();
 	return 0;
}