#include "bits/stdc++.h"

using namespace std;
 
using ll = long long;
using ii = pair<int, int>;
using ull = unsigned long long;
using vi = vector<int>;


void precalculate(vi &numeros, int n, vi &segtree)
{
    set<int> hash;
    for (int i = n-1; i >= 0; i--)
    {
        if (!hash.count(numeros[i]))
        {
            hash.insert(numeros[i]);
        }
        segtree[i] = hash.size();
    }
}

void solve()
{
	int n, m;
    cin >> n >> m;
    vi numeros(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> numeros[i];
    }
    vi segtree(n, 0);
    precalculate(numeros, n, segtree);
    for (int i = 0; i < m; i++)
    {
        int q;
        cin >> q;
        cout << segtree[q-1] << "\n";
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