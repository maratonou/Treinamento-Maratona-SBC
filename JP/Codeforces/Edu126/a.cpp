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
	int n; cin >> n;
    vi a(n, 0); forn(i, n) cin >> a[i];
    vi b(n, 0); forn(i, n) cin >> b[i];

    forn(i, n)
    {
        if (a[i] > b[i])
        {
            int tmp = a[i];
            a[i] = b[i];
            b[i] = tmp;
        }
    }
    ll ans = 0;
    for(int i = 1; i < n; i++)
    {
        ans+=abs(a[i]-a[i-1]);
    }
    for(int i = 1; i < n; i++)
    {
        ans+=abs(b[i]-b[i-1]);
    }
    cout << ans << ENDL;
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) solve();
 	return 0;
}