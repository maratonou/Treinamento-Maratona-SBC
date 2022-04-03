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
    vi v(n);
    forn(i, n) cin >> v[i];
    int m = 0;
    for(int i = 1; i < n-1; i++)
    {
        if (v[i] > v[i-1] && v[i] > v[i+1])
        {
            m++;
           if (i+1 != n-1)
           {
               v[i+1] = max(v[i], v[i+2]);
           }
           else
           {
               v[i+1] = v[i];
           }
        }
    }
    cout << m << ENDL;
    forn(i, n) cout << v[i] << " ";
    cout << ENDL;
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) solve();
 	return 0;
}