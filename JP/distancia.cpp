#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using ii = pair<int, int>;

int main()
{
    ii aux;
    aux.first = 90;
    aux.second = 60;
    int km_min = 60/(aux.first-aux.second);
    int min;
    cin >> min;
    cout << (min*km_min) << " minutos\n";

    return 0;
}