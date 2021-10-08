#include "bits/stdc++.h"

using namespace std;
 
using ll = long long;
using ii = pair<int, int>;
using ull = unsigned long long;

const ll MAX = (1000000000)+7;

ll factorials[200000];

ll factorial (ll n, ll miniN)
{
    ll fatorial = 1;
    for (ll i = 1; i <= n; i++)
    {
        int mod = (fatorial * i )%MAX;
        fatorial = mod;
    }
    return (fatorial/2);
}

void solve()
{
    int n;
    cin >> n;
    cout << factorial(2*n, n) << "\n";
}

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) solve();
 	return 0;
}