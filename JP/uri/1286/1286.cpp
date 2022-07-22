#include "bits/stdc++.h"

using namespace std;

#define forn(i, n) for(int i = 0; i < n; i++)

#define INF 100000
 
using ll = long long;
using ii = pair<int, int>;
using ull = unsigned long long;
using vi = vector<int>;

const string ENDL = "\n";

int dp[50];

void solve()
{
	int n; cin >> n;
	if (n == 0) exit(0);
	int p; cin >> p;
	vi pizza(n), time(n); 
	forn(i, n) cin >> time[i] >> pizza[i];

	forn(i, 50) dp[i] = -INF;
	dp[pizza[0]] = time[0];
	dp[0] = 0;
	for (int i = 1; i < n; i++)
	{
		for (int j = pizza[i]; j <= p; j++)
		{
			if (j == pizza[i])
			{
				dp[j] = max(dp[j], dp[0]+time[j]);
			}
		}
		for(int j = 0; j <= p; j++)
		{
			cout << dp[j] << " ";
		}
		cout << ENDL;
	}
	int ans = 0;
	forn(i, p+1) ans = max(ans, dp[i]);
	cout << ans << " min." << ENDL;
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	// cin >> t;
	while(1) solve();
 	return 0;
}