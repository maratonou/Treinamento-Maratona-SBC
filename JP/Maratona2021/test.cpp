#include "bits/stdc++.h"

using namespace std;
 
using ll = long long;
using ii = pair<int, int>;
using ull = unsigned long long;
using vi = vector<int>;

void solve()
{
    cout << "10000\n"; 
    cout << 1 << " " << "0\n";
    for (int i = 2; i <= 10000*3+2; i+=3)
    {
        cout << i << " " << (i%2 ? 1 : 0) << "\n";
    }
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	// cin >> t;
	while(t--) solve();
 	return 0;
}