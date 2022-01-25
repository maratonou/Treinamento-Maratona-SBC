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
	int n;
    cin >> n;
    vi v(n);
    forn(i, n)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());

    vi marcador(n+1, 0);

    for (int i= 0; i < n; i++)
    {
        if (v[i] <= n)
        {
            if (!marcador[v[i]])
                marcador[v[i]] += 1;
            else
            {
                if (v[i] == 1)
                {
                    cout << "NO\n";
                    return;
                }
                v[i]/=2;
                i--;
            }
        }
        else
        {
            //do stuff
            while (v[i] > n)
                v[i]/=2;
            i--;
        }
    }
    for (int i = 1; i < n; i++)
    {
        if (marcador[i] != 1)
        {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) solve();
 	return 0;
}