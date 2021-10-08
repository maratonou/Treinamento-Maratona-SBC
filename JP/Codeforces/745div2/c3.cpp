#include "bits/stdc++.h"

using namespace std;
 
using ll = long long;
using ii = pair<int, int>;
using ull = unsigned long long;
using vvi = vector<vector<int>>;

// ALGORITMO COM COMPLEXIDADE O(n³m²)

void print(vvi &prefixes, vector<string> matriz, int i, int j, int k, int l)
{
    for (int x = i; x <=k; x++)
    {
        for (int y = j; y <= l; y++)
        {
            cout << matriz[x][y];

        }
        cout << "\n";
    }
    cout << "\n";
    for (int x = i; x <=k; x++)
    {
        for (int y = j+1; y <= l+1; y++)
        {
            cout << prefixes[x][y] << " ";   
        }
        cout << "\n";
    }
}

void calculatePrefixes(vvi &prefixes, vector<string> &matriz, int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            prefixes[i][j+1] = matriz[i][j] - '0';
        }
        for (int j = 1; j <= m; j++)
        {
            prefixes[i][j] += prefixes[i][j-1];
        }
    }
}

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<string> matriz(n, "");
    vvi prefixes(n);
    for (int i = 0; i < n; i++)
    {
        cin >> matriz[i];
        prefixes[i].resize(m+1, 0);
        // cout << matriz[i] << "\n";
    }
    calculatePrefixes(prefixes, matriz, n, m);
    // print(prefixes, matriz, 0,0, n-1, m-1);
    int ans = 9999999;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            for (int k = i; k < n; k++)
            {
                for (int l = j; l < m; l++)
                {
                    
                }
            }
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