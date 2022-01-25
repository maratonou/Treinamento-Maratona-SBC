#include "bits/stdc++.h"

using namespace std;
 
const string _endl = "\n";

using ll = long long;
using ii = pair<int, int>;
using ull = unsigned long long;
using vi = vector<int>;


void solve()
{
	ll a, b;
    cin >> a >> b;

    if (a == 0 && b == 0)
    {
        cout << "YES\n";
        return;
    }
    else if ((b < 1 && a >= 1))
    {
        // cout << "1\n";
        cout << "NO\n";
        return;
    }
    else if ((a < 1 && b >= 1))
    {
        // cout << "2\n";
        cout << "NO\n";
        return;
    }
    else if (a %2 == 0 && b % 2 == 0)
    {
        // cout << "3\n";
        cout << "NO\n";
        return;
    }
    else if (b < a/2 || a < b/2)
    {
        // cout << "4\n";
        cout << "NO\n";
        return;
    }
    else if (b % 3 && a % 3)
    {
        // cout << "5\n";
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) solve();
 	return 0;
}