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

int valid(int r, int b, int k)
{
	while (b > 0 && r > 0)
	{
		r-=k;
		b--;
	}
	// cout << r << " " << k << ENDL;
	if (r <= k && b <= k) return 1;
	else return 0;
}

void solve()
{
	int n, r, b; cin >> n >> r >> b;
	//try all consecutives
	int k = r/(b+1);
	int resto = r %(b+1);
	while (r > 0 || b > 0)
	{

		for (int i = 0; i < k; i++)
		{
			cout << "R";
			r--;
		}
		if (resto > 0)
		{
			cout << "R";
			r--;
			resto--;
		}
		if (b > 0)
		{
			cout << "B";
			b--;
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