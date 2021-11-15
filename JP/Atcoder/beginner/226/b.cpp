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
    vector<vi> seqs(n);
    for (int i = 0; i < n; i++)
    {
        int l;
        cin >> l;
        seqs[i].resize(l, 0);
        for (int j = 0; j < l; j++)
        {
            cin >> seqs[i][j];
        }
    }
    sort(seqs.begin(), seqs.end());

    int ans = 1;
    for (int i = 1; i < n; i++)
    {
        if (seqs[i] != seqs[i-1])
        {
            ans++;
        }
    }
    cout << ans << "\n";
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	// cin >> t;
	while(t--) solve();
 	return 0;
}