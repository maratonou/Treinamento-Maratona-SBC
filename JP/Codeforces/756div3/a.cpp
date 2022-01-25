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
	string s;
    cin >> s;

    int n = s.size();
    vi v(n);

    for (int i = 0; i < n; i++)
    {
        v[i] = s[i] - '0';
    }

    int ok = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] % 2 == 0)
        {
            ok = 1;
            break;
        }
    }
    if (!ok)
    {
        cout << "-1\n";
    }
    else if (v[n-1] % 2 == 0)
    {
        cout << "0\n";
    }
    else if ( v[0] % 2 == 0 )
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