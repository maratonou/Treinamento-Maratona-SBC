#include "bits/stdc++.h"

using namespace std;
 
using ll = long long;
using ii = pair<int, int>;
using ull = unsigned long long;
using vi = vector<int>;
using vs = vector<string>;

void printAll(vs matrix, vector<vi> check)
{

}

int checkTick(vs &matrix, int k, ii root, int m, vector<vi> &checked)
{
    // cout << "a1\n";
    int tick = 0;
    int i, j;
    i = root.first; 
    j = root.second;
    // if (i == 0)
    //     return 0;
    while ( i - tick >= 0 && ( j - tick >= 0 && j + tick < m))
    {
        if (matrix[i - tick][j-tick] != '*' && matrix[i-tick][j+tick] != '*')
        {
            if (tick >= k)
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }

        checked[i-tick][j-tick] = 1;
        checked[i-tick][j+tick] = 1;
        cout << "   -> " << i-tick << ", " << j-tick << "\n";
        cout << "     ---> checked? " << checked[i-tick][j-tick] << "\n";
        cout << "   ->" << i-tick << ", " << j+tick << "\n";
        cout << "     ---> checked? " << checked[i-tick][j+tick] << "\n";
        tick++;
    }
    return tick >= k? 1 : 0;
}

void solve()
{
	int n, m, k;
    cin >> n >> m >> k;
    vs matrix(n);
    vector<vi> checked(n);
    for (int i = 0; i < n; i++)
    {
        cin >> matrix[i];
        checked[i].resize(m+1, 0);
    }
    // cout << "aaasdasd\n";
    for (int i = n-1; i > 0; i--)
    {
        // cout << "1\n";
        for (int j = m-1; j >=0; j--)
        {
            if (matrix[i][j] == '*')
            {
                cout << (j < n-1 && matrix[i-1][j+1] != '*') << " || " << (j > 0 && matrix[i-1][j-1] != '*');
                cout << " ->  " << i << " " << j << "\n";
                if (!checkTick(matrix, k, make_pair(i,j), m, checked))
                {
                    cout << "NO\n";
                    return;
                }
            }
        }
    }
    printAll(matrix, checked);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] == '*' && !checked[i][j])
            {
                cout << "NO\n";
                return;
            }
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