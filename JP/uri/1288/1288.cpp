#include "bits/stdc++.h"

using namespace std;

#define forn(i, n) for(int i = 0; i < n; i++)

using ll = long long;
using ii = pair<int, int>;
using ull = unsigned long long;
using vi = vector<int>;

const int INF = INT_MAX;

const string ENDL = "\n";

int dp[200];

void solve()
{
	int n; cin >> n;

	vi v(n);
	vi peso(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i] >> peso[i];
	}
	int p; cin >> p;
	int r; cin >> r;
	forn(i, p+1) dp[i] = -INF;
	dp[0] = 0;
	dp[peso[0]] = v[0];
	for (int i = 1; i < n; i++)
	{
		for(int j = p; j >= peso[i]; j--)
		{
			dp[j] = max(dp[j], dp[j-peso[i]]+v[i]);
		}
	}
	int ans = 0;
	for(int i = 0; i <= p; i++) ans = max(ans, dp[i]);
	if(ans >= r)
	{
		cout << "Missao completada com sucesso\n";
	}
	else
	{
		cout << "Falha na missao\n";
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