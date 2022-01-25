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
	int n, x, y;
    cin >> n >> x >> y;

    for (int i = 0; i < n; i++)
    {
        if (i % x == 0 && i % y > 0)
        {
            printf("%.6f", dH*sqrt(i/dN));
        }
    }
    cout << ENDL;
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) solve();
 	return 0;
}