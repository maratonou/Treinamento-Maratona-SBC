#include "bits/stdc++.h"

using namespace std;

#define forn(i, n) for (int i = 0; i < n; i++)
 
using ll = long long;
using f64 = double;
using ii = pair<int, int>;
using ull = unsigned long long;
using vi = vector<int>;
using vii = vector<ii>;
using ugraph = vector<vi>;
using dgraph = vector<vii>;

#define sz(x) x.size()

ifstream cin1("portals.in");

const string ENDL = "\n";

int dp[400000];
int ans;

void setIO(string s) {
    if (s.empty()) {
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    } else {
        freopen((s + ".in").c_str(), "r", stdin);
        // freopen((s + ".out").c_str(), "w", stdout);
    }
}

int most_close_portal(string &s, int n, int pt)
{    
    int i, j;
    int i_wall = 0;
    int j_wall = 0;
    for (i = pt, j = pt; i < n || j >=0; i++, j--)
    {
        if (s[i] == '#' || i == n)
        {
            i--;
            i_wall = 1;
        }
        if (s[j] == '#' || j == -1)
        {
            j++;
            j_wall = 1;
        }
        if (j_wall && i_wall) return -1;
        if (s[i] == 'o') return i;
        if (s[j] == 'o') return j;
        if (i_wall == 0) dp[i] = abs(i-pt);
        if (j_wall == 0) dp[j] = abs(j-pt);
    }
    return -1;
}

void  minimumBlocks(string &mapa, int s, int e, int n)
{
    cout << mapa << ENDL;
    int portal_s_ok = most_close_portal(mapa, n, s);
    int portal_e_ok = most_close_portal(mapa, n, e);
    cout << "portal_s = " << portal_s_ok << ENDL;
    cout << "portal_e = " << portal_e_ok << ENDL;

    if (portal_s_ok != -1 && portal_e_ok != -1)
    {
        ans = 2;
        return;
    }
}

void solve()
{
    int n; cin >> n;
    string s; cin >> s;
    int start = 0;
    int end = 0;
    vi portal;
    forn(i, n)
    {
        if (s[i] == 's')
            start = i;
        if (s[i] == 'e')
            end = i;
        if (s[i] == 'o')
            portal.push_back(i);
    }
    forn(i, n) dp[i] = INT_MAX;
    ans = 2;
    minimumBlocks(s, start, end, n);
    cout << ans << ENDL;
    cout << ENDL;
}
 
int main() {
    // setIO("balls");
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	// input >> t;
    cin >> t;
	while(t--) solve();
 	return 0;
}