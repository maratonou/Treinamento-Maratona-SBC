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
    vector<string> s(n), t(n);
    map<string, int> m;
    for (int i = 0; i < n; i++)
    {
        cin >> s[i] >> t[i];
        m[s[i]]++;
        m[t[i]]++;
    }
    for(int i = 0; i < n; i++)
    {
        if (m[s[i]] > 1 && m[t[i]] > 1 && s[i] != t[i])
        {
            cout << "No\n";
            return;
        }
    }
    cout << "Yes\n";
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	// cin >> t;
	while(t--) solve();
 	return 0;
}