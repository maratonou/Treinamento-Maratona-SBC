#include "bits/stdc++.h"

using namespace std;
 
using ll = long long;
using ii = pair<int, int>;
using ull = unsigned long long;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n, 0);
    vector<int> b(n, 0);

    vector<int> bits_a(n, 0);
    vector<int> bits_b(n, 0);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        bits_a[ a[i] ] = i;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        bits_b[ a[i] ] = i;
    }
    if (a[0] < b[0])
    {
        cout << "0\n";
        return;
    }
    ll ans = 100000^2;

    for (int i = 0; i < n; i++)
    {

    }
    cout << ans << "\n";
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) solve();
 	return 0;
}