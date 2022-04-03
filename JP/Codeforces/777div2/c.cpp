#include "bits/stdc++.h"

using namespace std;

#define forn(i, n) for (int i = 0; i < n; i++)
 
using ll = long long;
using f64 = double;
using ii = pair<int, int>;
using ull = unsigned long long;
using vi = vector<int>;
using vii = vector<ii>;


const string ENDL = "\n";

void solve()
{
	int n, m;
    cin >> n >> m;
    vector<string> design(n);
    forn(i, n) cin >> design[i];
    vector<string> mapa(n);
    vector<vi> op(n); 
    forn(i, n) mapa[i].resize(m, '0');
    forn(i, n) op[i].resize(m, 0);

    if (design[0][0] == '1')
    {
        cout << "-1\n";
        return;
    }
    forn(i, n)
    {
        if (i == 0) continue;
        if (design[i][0] == '0') continue;
        if (design[i-1][0] == '1')
        {
            cout << "-1\n";
            return;
        }
    }

    forn(i, n)
    {
        forn(j, m)
        {
            int r, l;
            l = r = 0;
            if ()
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