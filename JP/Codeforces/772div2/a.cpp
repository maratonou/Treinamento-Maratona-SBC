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
    vi v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i];
    
    sort(v.begin(), v.end());

    for(int i = 0; i < n-1; i++)
    {
        v[i+1] = v[i] | v[i+1];
        v[i] = 0;
    }
    int sum = 0;
    forn(i, n)
    {
        sum+=v[i];
    }
    cout << sum << ENDL;
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) solve();
 	return 0;
}