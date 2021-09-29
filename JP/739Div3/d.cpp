#include "bits/stdc++.h"
#include <math.h>

 
using namespace std;
 
using ll = long long;
using ii = pair<int, int>;
using ull = unsigned long long;

void solve()
{
    string s;
    cin >> s;

    int n = s.size();

    int ans = s.size() + 1; 

    int k;
    int t;
    string min_pot;
    for (int i = 0; i <= 62; i++)
    {
        t = 0;
        k = 0;
        string pot = to_string(1LL << i);
        int size_pot = pot.size();
        for (int j = 0; j < pot.size() && k < n; j++)
        {
            while (pot[j] != s[k] && k < n) k++;
            if (k < n && pot[j] == s[k])
            {
                k++;
                t++;
            }
        }
        ans = min(ans, n-k + size_pot-t + k-t);
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