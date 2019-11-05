#include <iostream>

using namespace std;

int main()
{
    double km, gas;
    cin >> km >> gas;
    cout.precision(3);
    cout << fixed << (km/gas) << " km/l" <<  endl;
    return 0;
}