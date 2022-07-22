#include <iostream>
 
using namespace std;
 
int main() {
    int n;
    cin >> n;
    int old_n = n;

    int notas[6] = {0};

    notas[0] += n/100;
    n = n%100;
    notas[1] += n/50;
    n = n%50;
    notas[2] += n/20;
    n = n%20;
    notas[3] += n/10;
    n = n%10;
    notas[4] += n/5;
    n = n%5;
    notas[5] += n/2;
    n = n%2;

    cout << old_n << "\n";
    cout << notas[0] << " nota(s) de R$ 100,00\n";
    cout << notas[1] << " nota(s) de R$ 50,00\n";
    cout << notas[2] << " nota(s) de R$ 20,00\n";
    cout << notas[3] << " nota(s) de R$ 10,00\n";
    cout << notas[4] << " nota(s) de R$ 5,00\n";
    cout << notas[5] << " nota(s) de R$ 2,00\n";
    cout << n << " nota(s) de R$ 1,00\n";
    return 0;
}