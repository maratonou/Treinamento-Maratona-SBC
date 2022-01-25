#include "bits/stdc++.h"
 
using namespace std;
 
using ll = long long;
using ii = pair<int, int>;
using ull = unsigned long long;

#define UP 1;
#define DOWN 2;
 
void solve()
{
	// y is row x is column
	ll x, y;
	cin >> y >> x;
	ll limit = y > x ? y : x;
	ll higher = limit*limit;
	ll limit_y, limit_x;

	if (limit % 2) // odd
	{
		limit_y = 1;
		limit_x = limit;
	}
	else // even
	{
		limit_y = limit;
		limit_x = 1;
	}

	ll distance = abs(limit_y-y) + abs(limit_x-x);

	ll ans = higher - distance;
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