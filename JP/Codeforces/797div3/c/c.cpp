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
	vi s(n); forn(i, n) cin >> s[i];
	vi f(n); forn(i, n) cin >> f[i];

	for(int i = 0; i< n; i++)
	{
		if (i == 0)
		{
			cout << f[i]-s[i] << " ";
		}
		else
		{
			if (s[i] > f[i-1])
			{
				cout << f[i]-s[i] << " ";
			}
			else 
			{
				cout << f[i]-f[i-1] << " ";
			}
		}
	}
	cout << ENDL;
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) solve();
 	return 0;
}