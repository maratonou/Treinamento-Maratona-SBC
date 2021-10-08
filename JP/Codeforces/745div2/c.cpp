#include "bits/stdc++.h"

using namespace std;
 
using ll = long long;
using ii = pair<int, int>;
using ull = unsigned long long;

// ALGORITMO COM COMPLEXIDADE O(N³M³)

void print(vector<string> matriz, int i, int j, int k, int l)
{
    for (int x = i; x <=k; x++)
    {
        for (int y = j; y <= l; y++)
        {
            cout << matriz[x][y];
        }
        cout << "\n";
    }
}

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<string> matriz(n, "");
    for (int i = 0; i < n; i++)
    {
        cin >> matriz[i];
        // cout << matriz[i] << "\n";
    }
    
    int ans = 9999999;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            for (int k = i; k < n; k++)
            {
                for (int l = j; l < m; l++)
                {
                    if (k-i+1 >= 5 && l-j+1 >= 4)
                    {
                        #ifdef DEBUG4
                        cout << "i " << i;
                        cout << " j " << j << "\n";
                        cout << "k " << k;
                        cout << " l " << l << "\n\n";
                        cout << "dentro das condicoes hehe, and should calculate the last line and column??\n";
                        #endif
                        int movesInside = 0;
                        int movesBorder = 0;
                        for (int x = i+1; x < k; x++)
                        {
                            for (int y = j+1; y < l; y++)
                            {
                                if (matriz[x][y] == '1') movesInside++;
                            }
                        }
                        #ifdef DEBUG
                            cout << "LAST COLUMN\n";
                        #endif
                        for (int cont = i+1; cont < k; cont++)
                        {
                            if (matriz[cont][l] == '0')
                                movesBorder++;
                            if (matriz[cont][j] == '0')
                                movesBorder++;
                            #ifdef DEBUG
                                cout << cont << " " << l << " value " << matriz[cont][l] << "\n";
                            #endif    
                        }
                        #ifdef DEUBG
                        cout << "LAST LINE\n";
                        #endif
                        for (int cont = j+1; cont < l; cont++)
                        {
                            if (matriz[k][cont] == '0')
                                movesBorder++;

                            if (matriz[i][cont] == '0')
                                movesBorder++;
                            #ifdef DEBUG
                                cout << k << " " << cont << " value " << matriz[k][cont] << "\n";
                            #endif
                        }
                        #ifdef DEBUG3
                        cout << "\nmovesBorder " << movesBorder;
                        cout << " movesInside " << movesInside << "\n\n";
                        #endif
                        int total = movesBorder + movesInside;
                        if (total < ans)
                        {
                            ans = total;
                            #ifdef DEBUG2
                            cout << ans << "\n";
                            print(matriz, i, j, k, l);
                            #endif
                        }
                    }
                }
                // cout << "\n";
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