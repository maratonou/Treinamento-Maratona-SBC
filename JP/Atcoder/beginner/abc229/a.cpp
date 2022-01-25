#include "bits/stdc++.h"

using namespace std;
 
using ll = long long;
using ii = pair<int, int>;
using ull = unsigned long long;
using vi = vector<int>;


void solve()
{
    string s1;
    string s2;
    cin >> s1 >> s2;

    if (s1 == "#." && s2 == ".#")
    {
        cout << "No\n";
        return;
    }
    if (s2 == "#." && s1 == ".#")
    {
        cout <<  "No\n";
        return;
    }
    cout << "Yes\n";
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	// cin >> t;
	while(t--) solve();
 	return 0;
}