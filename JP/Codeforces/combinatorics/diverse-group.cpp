#include "bits/stdc++.h"

using namespace std;

#define forn(i, n) for (int i = 0; i < n; i++)
 
using ll = long long;
using f64 = double;
using ii = pair<int, int>;
using ull = unsigned long long;
using vi = vector<int>;
using vii = vector<ii>;

#define MAX 1000000007

const string ENDL = "\n";

void solve()
{
	ll n, m, k; cin >> n >> m >> k;

    ll ans = 0;
    if (k <= n)
    {
        for (int i = 0; i < k; i++)
        {
            ans += m*(n-i);
        }
        int fat = 1;
        for(int i = 2; i <=k; i++) fat*=i;
        ans*= fat;

    }
    else cout << 0 << ENDL;
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