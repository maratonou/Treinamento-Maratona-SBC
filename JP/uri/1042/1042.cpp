#include "bits/stdc++.h"

using namespace std;

#define forn(i, n) for(int i = 0; i < n; i++)
 
using ll = long long;
using ii = pair<int, int>;
using ull = unsigned long long;
using vi = vector<int>;

void solve()
{
	vi v(3);
	for (int i = 0; i < 3; i++) cin >> v[i];

	vi cv(v);

	sort(cv.begin(), cv.end());
	for (int e : cv) cout << e << "\n";
	cout << "\n";
	for (int e : v) cout << e << "\n";
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	// cin >> t;
	while(t--) solve();
 	return 0;
}