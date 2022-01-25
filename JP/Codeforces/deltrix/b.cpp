#include "bits/stdc++.h"

using namespace std;

#define forn(i, n) for (int i = 0; i < n; i++)
 
using ll = long long;
using ii = pair<int, int>;
using ull = unsigned long long;
using vi = vector<int>;

const string ENDL = "\n";

int countABC(string s, int n)
{
    int ans = 0;
    for (int i = 0; i < n-2; i++)
    {
        if (s[i] == 'a')
        {
            if (s[i+1] == 'b' && s[i+2] == 'c')
            {
                ans++;
                i += 2;
            }
        }
    }
    return ans;
}
void solve()
{
	int n, q;
    cin >> n >> q;
    string s;
    cin.ignore();
    cin >> s;
    int a;
    char c;
    int ans = countABC(s, n);
    forn(i, q)
    {
        cin >> a >> c;
        if (s[a-1] == 'a' && a <= n-2 && s[a] == 'b' && s[a+1] == 'c')
        {
            ans--;
        }
        else if (s[a-1] == 'b' && a > 1 && a < n && s[a-2] == 'a' && s[a] == 'c')
            ans--;
        else if (s[a-1] == 'c' && a > 2 && s[a-1-1] == 'b' && s[a-1-2] == 'a')
        {
            ans--;
        }
        s[a-1] = c;

        if (c == 'a')
        {
            if (a <= n-2 && s[a] == 'b' && s[a+1] == 'c')
                ans++;
        }
        else if ( c == 'b')
        {
            if (a > 1 && a < n && s[a-2] == 'a' && s[a] == 'c')
                ans++;
        }
        else
        {
            if (a > 2 && s[a-1-1] == 'b' && s[a-1-2] == 'a')
                ans++;
        }
        cout << ans << ENDL;
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