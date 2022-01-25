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

	int sum = 0;
	int ans = 0;
	int n = s.size();
	char last = '2';

	for (int i = 0; i < n; i++)
	{
		if (last == '2')
		{
			sum++;
			last = s[i];
		}
		else if (s[i] == last)
		{
			sum++;
		}
		else
		{
			if (sum > ans)
			{
				ans = sum;
			}
			last = s[i];
			sum = 1;
		}
	}
	if (sum > ans)
	{
		ans = sum;
	}
	cout << ((ans >= 7) ? "YES\n" : "NO\n"); 
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	// cin >> t;
	while(t--) solve();
 	return 0;
}