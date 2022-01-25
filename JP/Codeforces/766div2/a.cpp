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
	int n, m, r, c;
    cin >> n >> m >> r >> c;
    cin.ignore();
    vector<string> matriz(n);
    int num_w = 0;
    forn(i, n)
    {
        cin >> matriz[i];
        forn(j, m)
        {
            if (matriz[i][j] == 'B')
                num_w++;
        }
    }
    if (!num_w)
    {
        cout << "-1\n";
        return;
    }
    if (matriz[r-1][c-1] == 'B')
    {
        cout << "0\n";
        return;
    }
    forn(i, n)
    {
        if (matriz[i][c-1] == 'B')
        {
            cout << "1\n";
            return;
        }
    }
    forn(j, m)
    {
        if (matriz[r-1][j] == 'B')
        {
            cout << "1\n";
            return;
        }
    }
    cout << "2\n";
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) solve();
 	return 0;
}