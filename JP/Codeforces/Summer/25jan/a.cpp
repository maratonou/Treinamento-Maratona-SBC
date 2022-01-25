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
    if (n <= 5)
        cout << "-1\n";
    else
    {
        if (n % 2 == 0) // even
        {
            cout << "2 " << n-2 << ENDL;
        }
        else // odd
        {
            cout << "3 " << n-3 << ENDL;
        }

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