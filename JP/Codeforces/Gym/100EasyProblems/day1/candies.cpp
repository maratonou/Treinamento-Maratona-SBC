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
    int n, e, d;
    cin >> n;
    vi kids(n,0);

    forn(i, n)
    {
        cin >> kids[i];
    }
    cin >> e >> d;
    int candies = 0;
    for (int i = e; i <= d; i++)
    {
        candies += kids[i];
    }
    cout << candies << ENDL;
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	// cin >> t;
	while(t--) solve();
 	return 0;
}