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
	int n;
    cin >> n;
    vii pieces;
    forn(i, n)
    {
        int u,v;
        cin >> u >> v;
        pieces.emplace_back(u,v);
        cout << pieces[i].first << " " << pieces[i].second << ENDL;
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