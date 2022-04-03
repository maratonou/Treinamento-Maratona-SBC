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
#define MAX 100000000

void solve()
{
	int n; cin >> n;
    vi a(n); forn(i, n) cin >> a[i];
    int k = a.size();
    // start with mostvaluable interval
    int min_s = MAX;
    int max_s = 0; max_s -= MAX;
    int lo = MAX;
    forn(i, n) min(lo, a[i]);
    if (lo < 0)
    {
        cout << lo << ENDL;
        return;
    }
    for(int i = 0; i < n; i++)
    {
        int sum = a[i]-a[(i+1) % k];
        min_s = min(sum, min_s);
        max_s = max(sum, max_s);
    }
    cout << min_s << ENDL;
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) solve();
 	return 0;
}