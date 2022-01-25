#include "bits/stdc++.h"

using namespace std;
 
const string _endl = "\n";

using ll = long long;
using ii = pair<int, int>;
using ull = unsigned long long;
using vi = vector<int>;


void solve()
{
	string s;
    cin >> s;
    int n = s.size();
    if (n <= 2)
    {
        cout << s << _endl;
        return;
    }
    string a = "";
    for (int i = 0; i < n; i+=2)
    {
        a = a + s[i];
    }
    a += s[n-1];
    cout << a << "\n";
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) solve();
 	return 0;
}