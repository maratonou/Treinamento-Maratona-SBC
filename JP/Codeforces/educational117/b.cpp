#include "bits/stdc++.h"

using namespace std;
 
using ll = long long;
using ii = pair<int, int>;
using ull = unsigned long long;
using vi = vector<int>;

const string ENDL = "\n";

void solve()
{
	int n, a, b;
    cin >> n >> a >> b;

    vi permutation(n+1, 0);
    permutation[n/2] = a;
    permutation[n/2 + 1] = b;

    for (int i = 1, j = n; i <= n && j > 0; i++, j--)
    {
        // cout << j << " " << i << ENDL;
        if (i == n/2)
        {
            i += 1;
            j++;
            continue;
        }
        if (j == a || j == b)
        {
            i--;
            continue;
        }
        permutation[i] = j;
    }
    for (int i = 1; i <= n/2-1; i++)
    {
        if (a > permutation[i])
        {
            cout << "-1\n";
            return;
        }
    }
    for (int i = n/2+2; i <= n; i++)
    {
        if (b < permutation[i])
        {
            cout << "-1\n";
            return;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        cout << permutation[i] << " ";
    }
    cout << ENDL;
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) solve();
 	return 0;
}