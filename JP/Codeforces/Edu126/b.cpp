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

#define MOD 32768

int dp[MOD+1];

void solve()
{
	int n; cin >> n;
    vi a(n, 0);
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
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