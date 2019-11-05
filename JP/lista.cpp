#include <iostream>

using namespace std;

int main ()
{
    int c;
    cin >> c;
    int aux, soma = 0;

    for (int i = 0; i < c; i++)
    {
        cin >> aux;
        soma += aux;
    }
    cout << soma << endl;
    return 0;
}