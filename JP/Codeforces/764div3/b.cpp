#include "bits/stdc++.h"

using namespace std;

#define forn(i, n) for (int i = 0; i < n; i++)
 
using ll = long long;
using ii = pair<int, int>;
using ull = unsigned long long;
using vi = vector<int>;

const string ENDL = "\n";

int isOk(int a, int b, int c)
{
    return ((a-b) == (b-c));
}

int statico = 0;

void solve()
{
    // cout << statico++ << ENDL;
	vi v(3);
    cin >> v[0] >> v[1] >> v[2];

    if (isOk(v[0], v[1], v[2]))
    {
        cout << "YES\n";
        return;
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = i+1; j < 3; j++)
        {
            if (i == 0 && j == 1)
            {
                // cout << "a1\n";
                int d = 2*v[1]-v[0];
                int div = d/v[2];
                if (d/v[2] > 0 && d == div*v[2] )
                {
                    cout << "YES\n";
                    return;
                }
            }
            else if (i == 0 && j == 2)
            {
                int d = (v[0] + v[2]);
                if (d % 2==0)
                {
                    d /=2;
                    int div = d/v[1];
                    if (d/v[1] > 0 && d == div*v[1] )
                    {
                        cout << "YES\n";
                        return;
                    }
                }
                else
                {
                    continue;
                }
            }
            else if (i == 1 && j == 2)
            {
                int d = 2*v[1]-v[2];
                int div = d/v[0];
                if (d/v[0] > 0 && d == div*v[0] )
                {
                    cout << "YES\n";
                    return;
                }
            }
        }
    }
    cout << "NO\n";
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) solve();
 	return 0;
}