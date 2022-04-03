
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

    vector<pair<ii, int>> tripla;

    if (v[n-2] > v[n-1])
    {
        cout << "-1\n";
        return;
    }

    for(int i = 0; i < n-2; i++)
    {
        if (v[i] > v[i+1])
        {
            // cout << v[i] << " " << v[i+1] << ENDL;
            if (v[i+2] > 0)
            {
                v[i] = v[i+1] - v[i+2];
                tripla.push_back(make_pair(make_pair(i, i+1), i+2));
            }
        }
    }

    forn(i, n-1)
    {
        if (v[i] > v[i+1])
        {
            cout << "-1\n";
            return;
        }
    }

    cout << tripla.size() << ENDL;

    for(int i = 0; i < (int) tripla.size(); i++)
    {
        cout << tripla[i].first.first+1 << " " << tripla[i].first.second+1 << " " << tripla[i].second+1 << ENDL;
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