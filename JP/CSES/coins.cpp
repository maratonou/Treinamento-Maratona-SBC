#include "bits/stdc++.h"

using namespace std;
 
const string _endl = "\n";

using ll = long long;
using ii = pair<int, int>;
using ull = unsigned long long;
using vi = vector<int>;


void solve()
{
	int a, b;
    cin >> a >> b;

    if (a %2 == 0 && b % 2 == 0)
    {
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	// cin >> t;
	while(t--) solve();
 	return 0;
}