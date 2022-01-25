#include "bits/stdc++.h"

using namespace std;

#define forn(i, n) for (int i = 0; i < n; i++)
 
using ll = long long;
using ii = pair<int, int>;
using ull = unsigned long long;
using vi = vector<int>;

const string ENDL = "\n";

void solve()
{
	string a, b;
    cin >> a >> b;

    for (int i = 0; i < (int)a.size(); i++)
    {
        a[i] = tolower(a[i]);
    }
    for (int i = 0; i < (int)b.size(); i++)
    {
        b[i] = tolower(b[i]);
    }
    
    int comparing = a.compare(b);

    cout <<( (comparing == 0) ? "0" : ( (comparing < 0) ? "-1" : "1" )) << ENDL;
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	// cin >> t;
	while(t--) solve();
 	return 0;
}