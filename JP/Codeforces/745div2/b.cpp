#include "bits/stdc++.h"

using namespace std;
 
using ll = long long;
using ii = pair<int, int>;
using ull = unsigned long long;


void solve()
{
    int n, m, k;
    cin >> n >> m >> k;

    ll maxEdges = (n*(n-1))/2;
    ll diameter = 1 + (maxEdges-m);
    if (diameter < k-1)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
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