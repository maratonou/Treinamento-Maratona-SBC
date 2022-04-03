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
	int j, a; cin >> j >> a;
    vector<char> camisas(j); forn(i, j) cin >> camisas[i];
    vi usadas(j, 0);
    int ans = 0;
    map<char, int> rank;
    rank['S'] = 1;
    rank['M'] = 2;
    rank['L'] = 3;
    forn(i, a)
    {
        char ai;
        int n;
        cin >> ai >> n;
        n--;
        // cout << n << " " << ai << "\nranks = " << rank[ai] << " " << rank[camisas[n]] << ENDL;
        if (rank[camisas[n]] >= rank[ai] && usadas[n] == 0)
        {
            // cout << "entrei\n";
            ans++;
            usadas[n] = 1;
        }
    }
    cout << ans << ENDL;
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	// cin >> t;
	while(t--) solve();
 	return 0;
}