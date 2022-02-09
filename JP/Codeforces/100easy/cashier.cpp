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
	int n, l, d;
	cin >> n >> l >> d;
    if (n == 0)
    {
        cout << l/d << ENDL;
        return;
    }
	vii c(n);
	int ans = 0;
	forn(i, n)
	{
	   cin >> c[i].first >> c[i].second;
	}
	if (c[0].first >= d)
	    ans+=c[0].first/d;
	if (l - (c[n-1].first+c[n-1].second) >= d)
	    ans+= (l - (c[n-1].first+c[n-1].second))/d ;
	forn(i, (n-1))
	{
	    int ini_i = c[i].first;
	    int dur_i = c[i].second;
	    int ini_prox_i = c[i+1].first;
	    if (ini_prox_i - (ini_i+dur_i) >= d)
	        ans+= (ini_prox_i - (ini_i+dur_i))/d;
	}
	cout << ans << ENDL;
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	// cin >> t;
	while(t--) solve();
 	return 0;
}