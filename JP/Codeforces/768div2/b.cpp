#include "bits/stdc++.h"

using namespace std;

#define forn(i, n) for (int i = 0; i < n; i++)
 
using ll = long long;
using ii = pair<int, int>;
using ull = unsigned long long;
using vi = vector<int>;

const string ENDL = "\n";

void solve()
{
	int n;
    cin >> n;
    vi a(n);
    forn(i, n) cin >> a[i];
    int ans = 0;
    int commom = a[n-1];
    for (int i = n-2; i >=0;)
    {
        if (i < 0)
            break;
        if (a[i] != commom)
        {
            ans++;
            i -= n-1 - i;
        }
        else
        {
            i--;
        }
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