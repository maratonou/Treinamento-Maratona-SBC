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
	int n, x, y;
    cin >> n >> x >> y;
    int ans = 0;
    vi a(n); forn(i, n) cin >> a[i];
    set<int> setao;
    int l = 0, r = 0;
    while (r < n)
    {
        setao.insert(a[r]);
        while (!setao.empty() && *setao.begin() == y && *setao.rbegin() == x)
        {
            setao.erase(setao.find(a[l]));
            l++;
        }
        r++;
        ans += (setao.size()*(setao.size()-1))/2 + setao.size();
        cout << "setao: ";
        for(auto e: setao) cout << e << " ";
        // cout << "(setao.size()*(setao.size()-1))/2 = " << (setao.size()*(setao.size()-1))/2 + setao.size() << ENDL;
        cout << ENDL;
    }
    cout << (n*(n-1)/2)+n-ans << ENDL;
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	// cin >> t;
	while(t--) solve();
 	return 0;
}