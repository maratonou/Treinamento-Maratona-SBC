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

const string ENDL = "\n";

void solve()
{
	int n;
    cin >> n;
    int g, s, b;
    string p;
    cin >> g >> s >> b;
    cin.ignore();
    getline(cin, p);
    forn(i, n-1)
    {
        int g2, s2, b2;
        string p2;
        cin >> g2 >> s2 >> b2;
        cin.ignore();
        getline(cin, p2);
        if (g2 > g)
        {
            g = g2;
            s = s2;
            b = b2;
            p = p2;
        }
        else if (g==g2 && s2 > s )
        {
            g = g2;
            s = s2;
            b = b2;
            p = p2;
        }
        else if (g==g2 &&s==s2 && b2 > b)
        {
            g = g2;
            s = s2;
            b = b2;
            p = p2;
        }
    }
    cout << p << ENDL;
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	// cin >> t;
	while(t--) solve();
 	return 0;
}