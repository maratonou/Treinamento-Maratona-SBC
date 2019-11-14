#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int t, n, n_pot, div, op, menor_op, aux;

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> n;
        for (int j = 1; j <= sqrt(n); j++)
        {
            // cout << "n = " << n << "\n";
            // cout << "j = " << j << "\n";
            if (j==1)
            {
                menor_op = n;
            }
            else if (n % j == 0)
            {
                n_pot = 0;
                do{
                    n_pot++;
                    aux = pow(j, n_pot);
                } while (n % aux == 0);
                aux = pow(j, --n_pot);
                op = j + (n_pot-1) + ((n/aux)-1);
                if (menor_op > op)
                    menor_op = op;
            }
            
        }
        cout << menor_op << "\n";
    }
    return 0;
}