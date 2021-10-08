#include "bits/stdc++.h"

using namespace std;
 
using ll = long long;
using ii = pair<int, int>;
using ull = unsigned long long;

void solve()
{
    int n;
    cin >> n;
    vector<int> s_int(n, 0);
    string s;
    cin >> s;

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        char ch = s[i];
        s_int[i] = atoi(&ch);
        if (s_int[i] > 0 && i == n-1)
        {
            ans += s_int[i];
            // cout << s_int[i] << "\n";
        }
        else if (s_int[i] > 0)
        {
            ans += s_int[i] + 1;
            // cout << s_int[i] << "\n";
        }
    }
    cout << ans << "\n";
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) solve();
 	return 0;
}