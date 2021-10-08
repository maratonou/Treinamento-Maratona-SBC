#include "bits/stdc++.h"
 
using namespace std;
 
using ll = long long;
using ii = pair<int, int>;
using ull = unsigned long long;
using vi = vector<int>;
using vvi = vector<vector<int>>;

// #define DEBUG


int allOff(vi lampadas)
{
    // for (int i = 1; i < (int)lampadas.size(); i++)
    // {
    //     cout << lampadas[i] << " ";
    // }
    // cout << "\n";
    int size = lampadas.size();
    for (int i = 1; i < size; i++)
    {
        if (lampadas[i])
            return 0;
    }
    return 1;
}

void run(vi lampadas, vvi interruptores)
{
    // for (int i = 1; i < (int)lampadas.size(); i++)
    // {
    //     cout << lampadas[i] << " ";
    // }
    // cout << "\n";
    ll moves = 0;
    for (int k = 0; k < 2; k++)
    {
        for (int i = 0; i < (int)interruptores.size(); i++)
        {
            // for (int i = 1; i < (int)lampadas.size(); i++)
            // {
            //     cout << lampadas[i] << " ";
            // }
            // cout << "\n";
            for (int j = 0; j < (int)interruptores[i].size(); j++)
            {
                lampadas[ interruptores[i][j] ] = !lampadas[ interruptores[i][j] ];
            }
            moves++;
            if (allOff(lampadas))
            {
                cout << moves << "\n";
                return;
            }
        }
    }
    cout << "-1\n";
}

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> lampadas(m+1, 0);
    int l;
    cin >> l;
    for (int i = 0; i < l; i++)
    {
        int aux;
        cin >> aux;
        lampadas[aux] = 1;
    }
    vector<vi> interruptores(n);

    vector<int> flips(m+1, 0);

    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        interruptores[i].resize(k, 0);
        for (int j = 0; j < k; j++)
        {
            int ki;
            cin >> ki;
            interruptores[i][j] = ki;
            flips[ki]++;
        }
    }

    // #ifdef DEBUG
    //     for (int i = 1; i < (int)lampadas.size(); i++)
    //     {
    //         cout << lampadas[i] << " ";
    //     }
    //     cout << "\n\n";
    //     for (int i = 0; i < n; i++)
    //     {
    //         cout << "Interruptor " << i << "\n";
    //         for (int j = 0; j < (int)interruptores[i].size(); j++)
    //         {
    //             cout << interruptores[i][j] << " "; 
    //         }
    //         cout << "\n";
    //     }
        
    // #endif
    run(lampadas, interruptores);
}

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
    solve();
    return 0;
}