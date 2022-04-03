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
	int n; cin >> n;
    vi a(n); forn(i, n) cin >> a[i];
    vi b(n); forn(i, n) cin >> b[i];
    int iej = 0;
    int idj = 0;
    map<int, int> indexA;
    map<int, int> indexB;

    forn(i, n)
    {
        indexA[a[i]] = i+1;
        indexB[b[i]] = i+1;
        if (a[i] == b[i])
            iej++;
    }
    forn(i, n)
    {
        if (indexB[a[i]] > 0 && indexA[a[i]] != indexB[a[i]])
            idj++;
    }
    cout << iej << ENDL;
    cout << idj << ENDL;
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	// cin >> t;
	while(t--) solve();
 	return 0;
}