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

#define size(x) x.size()

const string ENDL = "\n";

void solve()
{
    int n;
    cin >> n;
    cin.ignore();
    vector<string> s(n);
    vector<string> q(n);
    for (int i = 0; i < n; i++) cin >> s[i];
    for (int i = 0; i < n; i++) cin >> q[i];

    // for (int i = 0; i < n; i++) cout << s1[i] << " " << s2[i] << ENDL; 
    set<string> t;
    for(int i = 0; i < n; i++)
    {
        if (t.empty())
        {
            if (s[i] == q[i])
                cout << "1 ";
            else
                t.insert(s[i]);
        }
        else
        {
            if (t.find(s[i]) != t.end())
            {
            }
        }
    }
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) solve();
 	return 0;
}