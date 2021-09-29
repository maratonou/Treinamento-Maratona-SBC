#include "bits/stdc++.h"
 
using namespace std;
 
using ll = long long;
using ii = pair<int, int>;
using ull = unsigned long long;
 
void solve()
{
    double n;
    cin >> n;

    int notas[6] = {0};

    notas[0] += n/100.00;
    n = fmod(n, 100.00);

    notas[1] += n/50.00;
    n = fmod(n, 50.00);

    notas[2] += n/20.00;
    n = fmod(n, 20.00);

    notas[3] += n/10.00;
    n = fmod(n, 10.00);

    notas[4] += n/5.00;
    n = fmod(n, 5.00);

    notas[5] += n/2.00;
    n = fmod(n, 2.00);


    cout << "NOTAS:\n";
    cout << notas[0] << " nota(s) de R$ 100.00\n";
    cout << notas[1] << " nota(s) de R$ 50.00\n";
    cout << notas[2] << " nota(s) de R$ 20.00\n";
    cout << notas[3] << " nota(s) de R$ 10.00\n";
    cout << notas[4] << " nota(s) de R$ 5.00\n";
    cout << notas[5] << " nota(s) de R$ 2.00\n";


    int moedas[6] = {0};


    moedas[0] += n/1.00;
    cout << (n/1.00) << " " << n << "\n";
    n = n - ( (n/1.00) * 1.00 );
    // cout << n/1.00 << " " << n << "\n";

    moedas[1] += n/0.50;
    n = n - ( (n/0.50) * 0.50 );
    cout << n << "\n";

    moedas[2] += n/0.25;
    n = n - ( (n/0.25) * 0.25 );
    cout << n << "\n";

    moedas[3] += n/0.10;
    n = n - ( (n/0.10) * 0.10 );
    cout << n << "\n";

    moedas[4] += n/0.05;
    n = n - ( (n/0.05) * 0.05 );
    cout << n << "\n";

    moedas[5] += n/0.01;

    cout << "MOEDAS:\n";
    cout << moedas[0] << " moeda(s) de R$ 1.00\n";
    cout << moedas[1] << " moeda(s) de R$ 0.50\n";
    cout << moedas[2] << " moeda(s) de R$ 0.25\n";
    cout << moedas[3] << " moeda(s) de R$ 0.10\n";
    cout << moedas[4] << " moeda(s) de R$ 0.05\n";
    cout << moedas[5] << " moeda(s) de R$ 0.01\n";

}
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
    solve();
    return 0;
}