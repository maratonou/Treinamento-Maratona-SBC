#include <iostream>
#include <cmath>

using namespace std;

inline int maiorAB(int a, int b)
{
    return (a+b+abs(a-b))/2;
}

int main()
{
    int a, b, c, maior;
    cin >> a >> b >> c;
    maior = maiorAB(a, b);
    maior = maiorAB(maior, c);
    cout << maior << " eh o maior" << endl;
    return 0;
}