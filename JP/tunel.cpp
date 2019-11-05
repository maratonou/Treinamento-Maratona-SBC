#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int *v1 = new int[n];
    int *v2 = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
        v1[i]--;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> v2[i];
        v2[i]--;
    }

    vector<int> chegada(n);

    for (int i = 0; i < n; i++)
        chegada[v2[i]] = i;
    
    vector<int> c(n);
    for (int i = 0; i < n; i++)
        c[i] = chegada[v1[i]];

    int maior = -1, resp = 0;
    for (int i = 0; i < n; i++)
    {
        if (c[i] > maior)
        {
            maior = c[i];
        }
        else
            resp++;
    }
    cout << resp << endl;
    return 0;
}