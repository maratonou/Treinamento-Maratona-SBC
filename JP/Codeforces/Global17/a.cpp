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
	int n, m;
    cin >> n >> m;

    if (n == 1 && m == 1)
    {
        cout << "0\n";
        return;
    }
    if (n == 1 || m == 1)
    {
        cout << "1\n";
    }
    else
    {
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