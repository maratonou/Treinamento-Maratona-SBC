#include "bits/stdc++.h"

using namespace std;

#define forn(i, n) for (int i = 0; i < n; i++)
 
using ll = long long;
using f64 = double;
using ii = pair<int, int>;
using ull = unsigned long long;
using vi = vector<int>;
using vii = vector<ii>;


const string ENDL = "\n";

void solve()
{
	int p, q; cin >> p >> q;
    if (p <= 50 && q <= 10)
    {
        cout << "White\n";
    }
    else if (q > 30)
    {
        cout << "Red\n";
    }
    else
    {
        cout << "Yellow\n";
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