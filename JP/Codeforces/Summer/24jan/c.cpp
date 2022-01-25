#include "bits/stdc++.h"

using namespace std;

#define forn(i, n) for (int i = 0; i < n; i++)
 
using ll = long long;
using ii = pair<int, int>;
using ull = unsigned long long;
using vi = vector<int>;

const string ENDL = "\n";

int placeCows(vi &ns, int &n, int dist, int c)
{
    vi auxiliar(n, 0);
    int ok = 1;
    int cows = c;
    int start = 0;
    int l_cow = -1;
    while (true)
    {
        // cout << "placeCows\n";
        if (start == 0)
        {
            auxiliar[start] = 1;
            start++;
            cows--;
            l_cow = 0;
        }
        else
        {
            if (start > n)
            {
                // cout << "   impossible with dist = " << dist << ENDL;
                return 0;
            }
            if (cows == 0)
            {
                break;
            }
            if (ns[start]-ns[l_cow] >= dist)
            {
                // cout << "   C_COW(Start), L_COW = " << ns[start] << ", " << ns[l_cow] << ENDL;
                l_cow = start;
                start++;
                cows--;
            }
            else
            {
                start++;
            }
        }
    }
    // cout << "   possible with dist = " << dist << ENDL;
    return 1;
}
int positionCows(vi &ns, int &n, int &c)
{
    int lo = 0, hi = 1e9;
    int mid = (hi+lo)/2;
    int ans = 1;
    while (lo < mid)
    {   
        // cout << "PositionCows\n";
        // cout << "\nlo, hi = " << lo << ", " << hi << ENDL << ENDL;
        if (placeCows(ns, n, mid, c))
        {
            ans = mid;
            lo = mid;
            mid = (hi+lo)/2;
        }
        else
        {
            hi = mid;
            mid = (hi+lo)/2;
        }
    }
    return ans;
}
void solve()
{
    int n, c;
    cin >> n >> c;
    vi ns(n, 0);

    forn(i, n)
    {
        cin >> ns[i];
    }
    sort(ns.begin(), ns.end());
    vi auxiliar(n, 0);
    cout << positionCows(ns, n, c) << ENDL;
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) solve();
 	return 0;
}