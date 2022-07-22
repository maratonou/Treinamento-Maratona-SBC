#include "bits/stdc++.h"

using namespace std;

#define forn(i, n) for(int i = 0; i < n; i++)

using ll = long long;
using ii = pair<int, int>;
using ull = unsigned long long;
using vi = vector<int>;

const string ENDL = "\n";

bitset<7000> bits;

void solve()
{
	int r, k;
	while (cin >> r >> k) {
		vi peso(r, 0);
		forn(i, k)
		{
			int u,v; cin >> u >> v;
			u--; v--;
			peso[u]++;
			peso[v]++;
		}
		bits.reset();
		bits[0] = 1;
		bits[peso[0]] = 1;

		for(int i = 1; i < r; i++)
		{
			bits |= bits << peso[i];
			// for(int j = 0; j <= k; j++) cout << bits[j];
			// cout << ENDL;
		}
		if (bits[k]) cout << "S\n";
		else cout << "N\n";
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