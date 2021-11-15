#include "bits/stdc++.h"

using namespace std;
 
const string _endl = "\n";

using ll = long long;
using ii = pair<int, int>;
using ull = unsigned long long;
using vi = vector<int>;


void solve()
{
	int n;
    cin >> n;
	map<int, ll> hash;
	vi array(n, 0);
	for (int i = 1; i <= n; i++)
	{
		cin >> array[i-1];
		array[i-1] -= i;
		hash[array[i-1]] += 1;
	}
	vector<ll> somatorio(n+1, 0);
	for (int i = 1; i <=n; i++)
	{
		somatorio[i] = somatorio[i-1] + i-1;
	}
	set<ll> bits;
	ll ans = 0;
	for (int i = 0; i < n; i++)
	{
		if (!bits.count(array[i]))
		{
			bits.insert(array[i]);
			ans += somatorio[hash[array[i]]];
		}
	}
	cout << ans << _endl;
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) solve();
 	return 0;
}