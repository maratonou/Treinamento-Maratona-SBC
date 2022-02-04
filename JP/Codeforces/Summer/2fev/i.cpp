#include "bits/stdc++.h"

using namespace std;

#define forn(i, n) for (int i = 0; i < n; i++)
 
using ll = long long;
using f64 = double;
using ii = pair<int, int>;
using ull = unsigned long long;
using vi = vector<int>;
using vii = vector<ii>;
using ugraph = vector<vi>;
using dgraph = vector<vii>;

#define sz(x) x.size()

const string ENDL = "\n";

void solve()
{
	int n;
    cin >> n;
    vi h(n);
    vi v(n);

    forn(i, n) cin >> h[i];
    forn(i, n) cin >> v[i];

    int ans = v[0]-h[0];
    if (ans < 0)
    {
        cout << "0\n";
        return;
    }
    for (int i = 1; i < n; i++)
    {
        if (h[i]+ans < v[i])
        {
            cout << ans+1 << ENDL;
            return;
        }
        else if (h[i] + ans > v[i])
        {
            cout << ans << ENDL;
            return;
        }
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