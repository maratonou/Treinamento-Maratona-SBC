#include "bits/stdc++.h"

using namespace std;

#define forn(i, n) for (int i = 0; i < n; i++)
 
using ll = long long;
using f64 = double;
using ii = pair<int, int>;
using ull = unsigned long long;
using vi = vector<int>;
using vii = vector<ii>;
using vs = vector<string>;

const string ENDL = "\n";

void solve()
{
    int n; cin >> n;
    vs ld(n);
    forn(i, n) cin >> ld[i];
    vi v(n);
    forn(i, n)
    {
        v[i] = (ld[i] == "LIE") ? 0 : 1;
    }
    for (int i = n-1; i > 0; i--)
    {
        if (v[i] == 0)
        {
            v[i-1] = !v[i-1];
        }
    }
    if (v[0] == 0)
    {
        cout << "LIE\n";
    }
    else
    {
        cout << "TRUTH\n";
    }

}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	// cin >> t;
	while(t--) solve();
 	return 0;
}