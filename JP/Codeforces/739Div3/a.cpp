#include "bits/stdc++.h"
 
using namespace std;
 
using ll = long long;
using ii = pair<int, int>;
using ull = unsigned long long;
 
void solve()
{
    int k;
    cin >> k;
    int n = 0;
    while (k--)
    {
        n++;
        string s = to_string(n);
        char ch = s[s.size()-1];
        // cout << "ch ? " << ch << endl;
        while (n % 3 == 0 || ch == '3')
        {
            n += 1;
            s = to_string(n);
            ch = s[s.size()-1];
        }
    }
    cout << n << "\n";
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) solve();
 	return 0;
}