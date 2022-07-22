#include "bits/stdc++.h"

using namespace std;

#define forn(i, n) for(int i = 0; i < n; i++)
 
using ll = long long;
using ii = pair<int, int>;
using ull = unsigned long long;
using vi = vector<int>;

const string ENDL = "\n";

void solve()
{
	int j_base = 6;
	for(int i = 1; i <=9; i+=2)
	{
		for(int j = 0; j <=2; j++)
		{
			cout << "I=" << i << " J=" << j_base+i-j << ENDL;
		}
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