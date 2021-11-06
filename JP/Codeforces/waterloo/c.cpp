#include "bits/stdc++.h"

using namespace std;
 
using ll = long long;
using ii = pair<int, int>;
using ull = unsigned long long;
using vi = vector<int>;

const int LEFT = 1;
const int RIGHT = 2;
const int BOTH  = 3;
const char PEAO  = 'x';


void checkKing(vector<string> &mapa, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (mapa[i][j] == 'K')
            {
                // cout << "king is on " << i << "," << j << "\n";
                for (int k = (i>0 ? i-1: 0) ; k <= i+1 && k < n; k++)
                {
                    for (int l = (j>0 ? j-1 : 0) ; (l <= j+1 && l < n) ; l++)
                    {
                        if (!(l == j && k == i))
                        {
                            // cout << k << " " << l << "\n";
                            if (mapa[k][l] == '*')
                            {
                                mapa[k][l] = '-';
                            }
                        }
                    }
                }
            }
        }
    }
}
void solve()
{
    int n;
    cin >> n;
    vector<string> mapa(n);
    for (int i = 0; i < n; i++)
    {
        cin >> mapa[i];
    }
    int ans = 0;
    checkKing(mapa, n);
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (mapa[i][j] == '*')
            {
                if (j < n-2 && mapa[i][j+2])
                {
                    if (mapa[i+1][j+1] == '-')
                    {
                        mapa[i+1][j+1] = PEAO;
                        ans+=1;
                        mapa[i][j+2] = '-';
                        continue;
                    }
                    else if (j > 0 && mapa[i+1][j-1] == '-')
                    {
                        mapa[i+1][i-1] = PEAO;
                        ans+=1;
                        continue;
                    }
                    else
                    {
                        cout << "-1\n";
                        return;
                    }
                }
                else if (j == 0)
                {
                    if (mapa[i+1][j+1] == '-')
                    {
                        mapa[i+1][i+1] = PEAO;
                        ans+=1;
                        continue;
                    }
                    else
                    {
                        cout << "-1\n";
                        return;
                    }
                }
                else if (j == n-1)
                {
                    if (mapa[i+1][j-1] == '-')
                    {
                        mapa[i+1][i-1] = PEAO;
                        ans+=1;
                        continue;
                    }
                    else
                    {
                        cout << "-1\n";
                        return;
                    }
                }
                else
                {
                    if (mapa[i+1][j+1] == '-')
                    {
                        mapa[i+1][j+1] = PEAO;
                        ans+=1;
                        continue;
                    }
                    else if (mapa[i+1][j-1] == '-')
                    {
                        mapa[i+1][i-1] = PEAO;
                        ans+=1;
                        continue;
                    }
                    else
                    {
                        cout << "-1\n";
                        return;
                    }
                }
            }
        }
    }
    for (int j = 0; j < n; j++)
    {
        if (mapa[n-1][j] == '*')
        {
            cout << "-1\n";
            return;
        }
    }
    cout << ans << "\n";
    // for (int i = 0; i < n; i++)
    // {
    //     cout << mapa[i] << "\n";
    // }
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	solve();
 	return 0;
}