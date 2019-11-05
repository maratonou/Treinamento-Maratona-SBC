#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
    string s;
    cin >> s;
    
    vector<int> num_letras(4, 0);

    for (int i = 0; i < (int)s.size(); i++)
    {
        switch (s[i])
        {
        case 'n':
            num_letras[0]++;
            break;
        
        case 'i':
            num_letras[1]++;
            break;
        
        case 'e':
            num_letras[2]++;
            break;
        
        case 't':
            num_letras[3]++;
            break;
        }
    }

    int menor = num_letras[1];
    menor = min(menor, num_letras[3]);
    menor = min(menor, (num_letras[0]-1)/2);
    menor = min(menor, num_letras[2]/3);
    cout << menor << endl;
    return 0;
}
