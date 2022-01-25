#include "bits/stdc++.h"

using namespace std;

#define forn(i, n) for (int i = 0; i < n; i++)
 
using ll = long long;
using ii = pair<int, int>;
using ull = unsigned long long;
using vi = vector<int>;
using vll = vector<ll>;

const string ENDL = "\n";

void solve()
{
	int n;
    cin >> n;

    vll a(n);
    forn(i, n)
    {
        cin >> a[i];
    }
    ll sum = 0;
    ll cnt = 0;
    forn(i, n)
    {
        while (a[i] % 2 == 0)
        {
            a[i] /= 2;
            cnt++;
        }
        sum += a[i];
    }
    sort(a.begin(), a.end(), greater<ll>());

    cout << sum - a[0] + (a[0] << cnt) << ENDL;
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) solve();
 	return 0;
}