#include "bits/stdc++.h"

using namespace std;
 
const string _endl = "\n";

using ll = long long;
using ii = pair<int, int>;
using ull = unsigned long long;
using vi = vector<int>;


void solve()
{
	int t, d, m;
    cin >> t >> d >> m;
    if (d < t)
    {
        cout << "N\n";
        return;
    }
    if (!m)
    {
        cout << "Y\n";
        return;
    }
    vi meals(m, 0);
    for (int i = 0; i < m; i++)
    {
        cin >> meals[i];
        if (i == 0)
        {
            if (meals[i] >= t)
            {
                cout << "Y\n";
                return;
            }
        }
        else if (meals[i] - meals[i-1] >= t)
        {
            cout << "Y\n";
            return;
        }
    }
    if (d - meals[m-1] >= t)
    {
        cout << "Y\n";
        return;
    }
    cout << "N\n";
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	// cin >> t;
	while(t--) solve();
 	return 0;
}