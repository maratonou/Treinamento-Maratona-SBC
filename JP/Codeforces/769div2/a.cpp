#include "bits/stdc++.h"

using namespace std;

#define forn(i, n) for (int i = 0; i < n; i++)
 
using ll = long long;
using ii = pair<int, int>;
using ull = unsigned long long;
using vi = vector<int>;

const string ENDL = "\n";
int isOrganized(string &s, int len)
{
    for (int i = 0; i < len-1; i++)
        if (s[i] == s[i+1])
            return 1;
    return 0;
}
void solve()
{
	int n; cin >> n;
    string s; cin >> s;
	if (n>2)
	{
		cout << "NO\n";
		return;
	}
    if (n > 1 && isOrganized(s, n))
    {
        cout << "NO\n";
    }
    else
    {
        cout << "YES\n";
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