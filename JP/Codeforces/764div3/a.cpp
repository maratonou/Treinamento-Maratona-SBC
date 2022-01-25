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

    int lo = 1000000000;
    int hi = 0;

    for (int i = 0; i < n; i++)
    {
        int elem;
        cin >> elem;
        if (elem > hi)
            hi = elem;
        if (elem < lo)
            lo = elem;
    }
    cout << abs(hi - lo) << ENDL;
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) solve();
 	return 0;
}