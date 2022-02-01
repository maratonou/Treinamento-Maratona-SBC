#include "bits/stdc++.h"

using namespace std;

#define forn(i, n) for (int i = 0; i < n; i++)
 
using ll = long long;
using ii = pair<int, int>;
using ull = unsigned long long;
using vi = vector<int>;

const string ENDL = "\n";

void solve()
{
    int n, k;
    // cin >> n >> k;
    cin >> n >> k;
    vi flag(n, 0);
    if (k > n/2)
    {
        cout << "-1\n";
        return;
    }
    vector<ii> pairs;
    if (k % 2)
    {
        forn(i, n)
        {
            if (1&i)
            {
                pairs.emplace_back(1, i);
                flag[1] = 1;
                flag[i] = 1;
                k--;
            }
        }
    }
    int ok = 0;
    forn(i, n)
    {
        forn(j, n)
        {
            if (i&j > 0 && i&j % 2 == 0 && i&j <= k && !(flag[i]&flag[j]))
            {
                pairs.emplace_back(i, j);
                flag[i] = 1;
                flag[j] = 1;
                k-= i&j;
            }
            if (k == 0)
            {
                ok = 1;
                break;
            }
        }
        if (ok)
            break;
    }
    if (!ok)
    {
        cout << "-1\n";
        return;
    }
    forn(i, n)
    {
        forn(j, n)
        {
            if (i&j == 0 && !(flag[i]&flag[j]))
            {
                pairs.emplace_back(i, j);
                flag[i] = 1;
                flag[j] = 1;
            }
    }

    // 1+2+4+8+16
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) solve();
 	return 0;
}