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

void setIO(string s) {
    if (s.empty()) {
        freopen("input.txt", "r", stdin);
        // freopen("output.txt", "w", stdout);
    } else {
        freopen((s + ".in").c_str(), "r", stdin);
        // freopen((s + ".out").c_str(), "w", stdout);
    }
}

void solve()
{
	
}
 
int main() {
	setIO("");
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) solve();
 	return 0;
}