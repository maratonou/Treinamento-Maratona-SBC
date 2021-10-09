#include "bits/stdc++.h"

using namespace std;
 
using ll = long long;
using ii = pair<int, int>;
using ull = unsigned long long;
using vi = vector<int>;

const ll MAX = 1000000000+7;


void solve()
{
	int n, k;
	cin >> n >> k;
	vi bits(31, 0);

	int counter = 0;
	while (k > 0)
	{
		bits[counter] = k % 2;
		k/=2;
		counter++;
		// cout << counter << "\n";
	}
	ll ans = 0;
	ll a = 1;
	// for (int i = 0; i < (int) bits.size(); i++)
	// {
	// 	cout << bits[i] << " ";
	// }
	for (int i = 0; i < (int) bits.size(); i++)
	{
		
		if (bits[i])
		{
			ans += a;
			ans = ans % MAX;
		}
		a = (a*n % MAX);
	}
	cout << (ans ? ans : 1) << "\n";
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) solve();
 	return 0;
}