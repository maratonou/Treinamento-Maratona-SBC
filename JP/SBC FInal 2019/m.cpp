#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);

    int n, x, visitados = 1, maior = 0;

    cin >> n >> x;

    vector<int> n_alturas(n);

    for (int i = 0; i < n; i++)
    {
        cin >> n_alturas[i];
    }

    for (int i = 1; i < n; i++)
    {
        // cout << "picos = " << n_alturas[i-1] << ", " << n_alturas[i] << "\n";
        if (n_alturas[i] - n_alturas[i-1] <= x)
        {
            // cout << "picos1 = " << n_alturas[i-1] << ", " << n_alturas[i] << "\n";
            visitados++;
        }
        else
        {
            // cout << "picos2 = " << n_alturas[i-1] << ", " << n_alturas[i] << "\n";
            visitados = 1;
        }
        if (maior <= visitados)
        {
            maior = visitados;
        }
        
    }
    cout << visitados << "\n";

    return 0;
}