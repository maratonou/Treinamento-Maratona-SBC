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

ifstream hamming("hamming.in");

const string ENDL = "\n";

void solve()
{
    int n;
    // cin >> n;
    hamming >> n;
    string a, b;
    hamming >> a >> b;
    // cin >> a >> b;

    string c(a);

    forn(i, (int)sz(c))
    {
        if (c[i] == '1')
        {
            c[i] = '0';
        }
        else
        {
            c[i] = '1';
        }
    }
    
    vi freq_c(2, 0);
    vi freq_b(2, 0);

    forn(i, (int)sz(c)) {freq_c[c[i] - '0'] ++; freq_b[b[i] - '0'] ++;}
    int difs = 0;

    if (freq_c[0] > freq_b[0])
    {
        difs += freq_c[0]-freq_b[0];
    }
    if (freq_c[1] > freq_b[1])
    {
        difs += freq_c[1]-freq_b[1];
    }
    // cout << "c = " << freq_c[0] << " " << freq_c[1] << " ||  b = " << freq_b[0] << " " << freq_b[1] << ENDL;
    int ans = (int)sz(a);
    cout << ans-difs << ENDL;
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	hamming >> t;
    // cin >> t;
	while(t--) solve();
    hamming.close();
 	return 0;
}