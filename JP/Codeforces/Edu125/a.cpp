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
	int x, y; cin >> x >> y;

    if(x == 0 && y == 0)
        cout << "0\n";
    else
    {
        int norma = (x*x) + (y*y);
        int sqr = sqrt(norma);
        if (norma == sqr*sqr)
            cout << "1\n";
        else
            cout << "2\n";
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