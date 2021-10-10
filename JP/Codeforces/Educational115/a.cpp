#include "bits/stdc++.h"

using namespace std;
 
using ll = long long;
using ii = pair<int, int>;
using ull = unsigned long long;
using vi = vector<int>;


void solve()
{
    int m;
    cin >> m;
	vector<vi> level (2);
	level[0].resize(m, 0);
	level[1].resize(m, 0);
	for (vi &lvl: level)
	{
		for (int &x: lvl)
		{
			cin >> x;
			cout << x << " ";
		}
	}
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) solve();
 	return 0;
}