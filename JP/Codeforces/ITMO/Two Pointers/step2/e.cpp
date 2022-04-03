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
	ll n,k;
    cin >> n >> k;
    vi a(n);
    forn(i, n) cin >> a[i];
    ll l, r;
    l = 0;
    r = 0;
    ll ans = 0;
    map<int, int> freq;
    set<int> dif;
    while (r < n)
    {
        freq[a[r]]++;
        if (!dif.count(a[r]))
            dif.insert(a[r]);
        ll difSize = dif.size(); 
        // cout << difSize << ENDL;
        while (difSize > k)
        {
            freq[a[l]]--;
            // cout << "freq[a[l]] = " << freq[a[l]] << ENDL;
            if (freq[a[l]] == 0)
                dif.erase(a[l]);
            l++;
            difSize = dif.size();
        }
        // cout << "sum at dif size " << dif.size() << ENDL;
        // cout << r << " " << l << ENDL;
        ans += r-l+1;
        r++;
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