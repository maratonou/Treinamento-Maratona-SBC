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
    string s;
    cin >> s;
    int k;
    cin >> k;

    int points = 0;
    int n = s.size();

    vi p(n+1);

    for(int i = 0; i <= n-1; i++)
        if (s[i] == '.') p[i+1] = p[i]+1;
        else p[i+1] = p[i];

    int hi = 0;
    int ans = 0;
    for (int lo = 0; lo <= n-1; lo++)
    {
        while (hi <= n-1 && p[hi+1] - p[lo] <= k)
            hi++;

        ans = max(ans, hi-lo);
    }
    cout << ans << ENDL;
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	// cin >> t;
	while(t--) solve();
 	return 0;
}