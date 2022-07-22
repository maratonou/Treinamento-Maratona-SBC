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
	vi a(n); forn(i, n) cin >> a[i];
	vi b(n); forn(i, n) cin >> b[i];
	if (n == 1)
	{
		if (b[0] > a[0])
		{
			cout << "NO\n";
			return;
		}
		cout << "YES\n";
	}
	else
	{
		int last_dif = 0;
		for (int i = 0; i < n; i++)
		{
			if (a[i]-b[i] >= 0 )
			{
				if (last_dif < a[i]-b[i])
					last_dif = a[i]-b[i];
			}
			else
			{
				cout << "NO\n";
				return;
			}
		}
		for (int i = 0; i < n; i++)
		{
			if (last_dif > a[i]-b[i] && b[i]!=0)
			{
				cout << "NO\n";
				return;
			}
		}
		cout << "YES\n";
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