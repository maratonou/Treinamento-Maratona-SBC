#include "bits/stdc++.h"

using namespace std;
 
const string _endl = "\n";

using ll = long long;
using ii = pair<int, int>;
using ull = unsigned long long;
using vi = vector<int>;


void solve()
{
	ll n, k;
    cin >> n >> k;

    ll ans = 0;
    int a = 1;

    while(k)
    {
        if (k%2)
        {
            ans += a % 1000000007 ;
        }
        k/=2;
        a = ((a*n) % 1000000007 );
    }
    cout << ans % 1000000007 << _endl;
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) solve();
 	return 0;
}