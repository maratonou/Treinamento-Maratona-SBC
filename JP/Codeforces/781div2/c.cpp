#include "bits/stdc++.h"

using namespace std;

#define forn(i, n) for (int i = 0; i < n; i++)
 
using ll = long long;
using f64 = double;
using ii = pair<int, int>;
using ull = unsigned long long;
using vi = vector<int>;
using vii = vector<ii>;


int dp[210];

const string ENDL = "\n";

void solve()
{
    int n; cin >> n;
    vi v(n-1);
    map<int, int> f;
    for(int i = 0; i < n-1; i++)
    {
        cin >> v[i];
        f[v[i]]++;
    }
    int ans = n;
    for(auto e: f)
    {
        
    }
    cout << ans << ENDL;
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
    dp[0] = 0;
    for(int i = 1; i <= 200; i++)
    {
        dp[i] = dp[i-1]+i;
    }
	int t = 1;
	cin >> t;
	while(t--) solve();
 	return 0;
}