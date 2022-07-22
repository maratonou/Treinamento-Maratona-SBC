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
	int n; cin >> n;

	int common_p = n/3;
	int rest_p = n%3;
	if (rest_p == 2)
	{
		cout << common_p + 1 << " " << common_p + 2 << " " << common_p - 1 << ENDL;
	}
	else if (rest_p == 1)
	{
		cout << common_p << " " << common_p + 2 << " " << common_p - 1 << ENDL;
	}
	else
	{
		cout << common_p << " " << common_p + 1 << " " << common_p - 1 << ENDL;
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