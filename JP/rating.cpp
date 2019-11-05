#include <iostream>
#include <cmath>

using namespace std;

inline int somaArray(int n, int *a)
{
    int soma = 0;
    for(int i = 0; i < n; i++)
        soma+=a[i];
    return soma;
}

inline void printaArray(int n, int *a)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << endl;
}

int main()
{
    int n;
    cin >> n;
    int *a = new int[n];
    int n_impar = 0;
    int n_floor;

    for (int i = 0; i < n; i++)
    {   
        cin >> a[i];
        if (a[i] % 2 !=0) n_impar++;
    }
    n_floor = floor(n_impar/2);

    for(int i = 0; i < n; i++)
    {
        if (a[i]%2 != 0)
        {
            if (n_floor > 0)
            {
                a[i] = floor(static_cast<float>(a[i])/2);
                n_floor--;
            }
            else 
                a[i] = ceil(static_cast<float>(a[i])/2);

            
        }
        else
            a[i] = a[i]/2;
    }
    if (somaArray(n, a) == 0)
        printaArray(n, a);

    return 0;
}