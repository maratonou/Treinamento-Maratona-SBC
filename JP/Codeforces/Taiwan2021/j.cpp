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
	string a, b;
    cin >> a >> b;
    int ok = 1;
    forn(i, (int)sz(a))
    {
        if(a[i] > '9' || a[i] < '0')
        {
            ok = 0;
            break;
        }
    }
    forn(i, (int)sz(b))
    {
        if(b[i] > '9' || b[i] < '0')
        {
            ok = 0;
            break;
        }
    }
    if (!ok)
    {
        cout << "NaN\n";
        return;
    }
    cout << stoi(a)-stoi(b) << ENDL; 
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	while(t--) solve();
 	return 0;
}