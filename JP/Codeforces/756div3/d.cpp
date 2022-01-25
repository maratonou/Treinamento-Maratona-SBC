#include "bits/stdc++.h"

using namespace std;

#define forn(i, n) for (int i = 0; i < n; i++)
 
using ll = long long;
using ii = pair<int, int>;
using ull = unsigned long long;
using vi = vector<int>;

const string ENDL = "\n";


void solve()
{
	int n;
    cin >> n;
    vi ds(n, 0);
    vi p(n, 0);
    int root = 0;
    forn(i, n)
    {
        cin >> ds[i];
        if (ds[i] = i+1)
            root = ds[i];
    }
    forn(i, n)
    {
        cin >> p[i];
    }
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) solve();
 	return 0;
}