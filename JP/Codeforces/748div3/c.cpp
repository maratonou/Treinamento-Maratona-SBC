#include "bits/stdc++.h"

using namespace std;
 
using ll = long long;
using ii = pair<int, int>;
using ull = unsigned long long;
using vi = vector<int>;

void solve()
{
    int n, k;
    cin >> n >> k;
    vi mouses (k, 0);

    for (int i = 0; i < k; i++)   
    {
        cin >> mouses[i];
    }
    sort(mouses.begin(), mouses.end());

    int moves = n;
    int ans = 0;
    for (int i = k-1; i >= 0; i--)
    {
        // cout << "mouses[i] = " << mouses[i] << "\n";
        if (n-mouses[i] < moves)
        {
            moves-=(n-mouses[i]);
            // cout << moves << "\n";
            ans++;
        }
    }
    cout << ans << "\n";
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) solve();
 	return 0;
}