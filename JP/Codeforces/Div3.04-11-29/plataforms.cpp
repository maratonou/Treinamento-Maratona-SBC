#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, d;
    /*  n = largura do rio, sendo 0 uma margem e n+1 a outra
        m = quantidade de plataformas
        d = tamanho maximo do pulo*/
    cin >> n >> m >> d;

    queue<int> *c = new queue<int>;
    int in, soma = 0; // o vetor c contém o tamanho das m plataformas.
    for (int i = 0; i < m; i++)
    {
        cin >> in;
        soma += in;
        c->push(in-1);
    }
    int pos_atual = -1;
    int resto = n+1;

    vector<int> rio(n, 0);
    int aux_larg;
    int n_plat = 1;

    while (!c->empty() && soma < resto)
    {
        pos_atual += d;
        resto -= d;
        if (soma <= resto)
        {
            for (int i = 0; i <= c->front(); i++)
            {
                rio[pos_atual+i] = n_plat;
            }
            pos_atual += c->front();
            resto -= c->front();
            // cout << "pos_atual = " << pos_atual << " || n-d = " << n-d << "\n"; 
            soma -= (c->front()+1);
            c->pop();
            n_plat++;
        }
        else 
            break;
    }
    if (!c->empty())
    {
        // cout << "n_plat = " << n_plat << "\n";
        // cout << "1 - soma = " << soma << " resto = " << resto << "\n";
        pos_atual = n-soma;
        int aux;
        while (!c->empty())
        {
            aux = 0;
            for (int i = 0; i <= c->front(); i++)
            {
                rio[pos_atual+i] = n_plat;
                aux++;
            }
            pos_atual += c->front()+1;
            resto -= c->front()+1;
            // cout << "aux? " << aux << "\n";
            // cout << "pos_atual = " << pos_atual << " || n-d = " << n-d << "\n"; 
            soma -= (c->front()+1);
            c->pop();
            n_plat++;
        }
    }
    if (pos_atual >= n-d)
    {
        // Resposta = YES
        // cout << "YES: pos_atual = " << pos_atual << " || n-d = " << n-d << "\n";
        cout << "YES\n";
        for (int i = 0; i < n; i++)
        {
            cout << rio[i];
            if (i < n-1)
                cout << " ";
        }
        cout << "\n";
    }
    else
    {
       
        // Resposta = NO
        cout << "NO\n";
        // for (int i = 0; i < n; i++)
        // {
        //     cout << rio[i];
        //     if (i < n-1)
        //         cout << " ";
        // }
        // cout << "\n";
    }
    delete c;
    // rio.clear();
    return 0;
}