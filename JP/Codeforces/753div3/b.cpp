#include "bits/stdc++.h"

using namespace std;
 
using ll = long long;
using ii = pair<int, int>;
using ull = unsigned long long;
using vi = vector<int>;

void solve()
{
    ll x0, n;
    cin >> x0 >> n;

    int resto = n % 4;
    ll base = 1LL*(n - resto);

    for (int i = 1; i <= resto; i++)
    {
        if (x0 % 2)
        {
            x0 += base + i;
        }
        else
        {
            x0 -= base+i;
        }
    }
    cout << x0 << "\n";
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) solve();
 	return 0;
}