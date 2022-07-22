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
    map<int, int> f;
    for(int i = 0; i < n; i++)
    {
        int e; cin >> e;
        f[e]++;
    }
    int ans = 0;
    int origin;
    for( auto e : f)
    {
        ans = max(ans, e.second);
    }
    if(n == 1 || ans == n)
    {
        cout << 0 << ENDL;
        return;
    }
    origin = ans;
    int multi = 0;
    while(ans*2 < n)
    {
        ans*=2;
        multi++;
    }
    // cout << "ans = " <<  ans << ENDL;
    // cout << "multi = " << multi << ENDL;
    // cout << "n = " << n << ENDL;
    cout << ans+(n-ans)+multi-origin+1 << ENDL;
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) solve();
 	return 0;
}