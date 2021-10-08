#include "bits/stdc++.h"
 
using namespace std;
 
using ll = long long;
using ii = pair<int, int>;
using ull = unsigned long long;
 
void solve()
{
    int a,b,c;
    cin >> a >> b >> c;
    int n = abs(a-b)*2;

    if (a > n || b > n || c > n)
    {
        cout << "-1\n";
        return;
    }

    if (c > n || (c + n/2 > n && c - n/2 < 1))
    {
        cout << "-1\n";
        return; 
    }
    else
    {
        if (c + n/2 > n)
        {
            cout << c-n/2 << "\n";
        }
        else
        {
            cout << c+n/2 << "\n";
        }
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