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
    deque<pair<ll, ll>> cil;
    for (int i = 0; i < n; i++)
    {
        ll t, x, c;
        cin >> t;
        if (t == 1)
        {
            cin >> x >> c;
            cil.push_front(make_pair(c, x));
        }
        else
        {
            cin >> c;
            ll sum = 0;
            while (c > 0)
            {
                if (c >= cil.back().first)
                {
                    if (cil.empty()) break;
                    sum += (cil.back().first*cil.back().second);
                    c -= cil.back().first;
                    cil.pop_back();
                }
                else
                {
                    if (cil.empty()) break;
                    sum+= (c*cil.back().second);
                    cil[cil.size()-1].first -= c;
                    c = 0;
                }
            }
            cout << sum << ENDL;
        }
    }
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	// cin >> t;
	while(t--) solve();
 	return 0;
}