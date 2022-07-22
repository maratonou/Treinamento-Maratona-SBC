#include "bits/stdc++.h"

using namespace std;

#define forn(i, n) for(int i = 0; i < n; i++)
 
using ll = long long;
using ii = pair<int, int>;
using ull = unsigned long long;
using vi = vector<int>;

#define SIZE 10000

vi divisors[SIZE];

const string ENDL = "\n";

void solve()
{
	int n; cin >> n;
	
	for(int i = 1; i <= n; i++)
	{
		if (n % i==0) cout << i << ENDL;
	}
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	// cin >> t;
	while(t--) solve();
 	return 0;
}