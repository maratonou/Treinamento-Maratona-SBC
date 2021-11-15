#include "bits/stdc++.h"

using namespace std;
 
using ll = long long;
using ii = pair<int, int>;
using ull = unsigned long long;
using vi = vector<int>;


void solve()
{
    int n;
    cin >> n;
    map<vi, int> container;
    for (int i = 0; i < n; i++)
    {
        int l;
        cin >> l;
        vi seq(l, 0);
        for (int j = 0; j < l; j++)
        {
            cin >> seq[j];
        }
        if (!container[seq])
        {
            container[seq] = 1;
        }
    }
    cout << (int)container.size() << "\n";
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	// cin >> t;
	while(t--) solve();
 	return 0;
}