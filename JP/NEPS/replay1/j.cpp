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

int isPossible(int n, int &l, vi &a, int k)
{
    int c = k;
    for(int i= 1; i < n-1; i++)
    {
        if (c == 0)
            return 0;
        
        if (n)
    }
}

void solve()
{
	int n, l; cin >> n >> l;
    vi a(n); forn(i, n) cin >> a[i];
    int ans = 0;

    sort(a.begin(), a.end());

    int lo = 0;
    int hi = n;
    int mid = (hi+lo)/2;
    while (lo < hi)
    {
        if (isPossible(n, l, a, mid))
        {
            lo = mid;
            mid = (hi+lo)/2;
        }
        else
        {
            hi = mid;
            mid = (hi+lo)/2;
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