#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> entradas;
    int aux;
    cin >> aux;
    entradas.push_back(aux);
    cin >> aux;
    entradas.push_back(aux);

    cout.precision(3);
    cout << fixed << static_cast<float>(entradas[0]*entradas[1])/12.0 << endl;

    return 0;
}