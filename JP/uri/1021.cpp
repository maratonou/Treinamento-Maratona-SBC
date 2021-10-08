#include "bits/stdc++.h"
 
using namespace std;
 
using ll = long long;
using ii = pair<int, int>;
using ull = unsigned long long;
 
void solve()
{
    double n;
    int inteiro, moedas;
    while(cin >> n)
    {
        inteiro = (int) n;
        moedas = (int)(n*100);
        moedas = moedas % 100;

        cout << "NOTAS:\n";
        cout << inteiro/100 << " nota(s) de R$ 100.00\n";
        inteiro %= 100;
        cout << inteiro/50 << " nota(s) de R$ 50.00\n";
        inteiro %= 50;
        cout << inteiro/20 << " nota(s) de R$ 20.00\n";
        inteiro %= 20;
        cout << inteiro/10 << " nota(s) de R$ 10.00\n";
        inteiro %= 10;
        cout << inteiro/5 << " nota(s) de R$ 5.00\n";
        inteiro %= 5;
        cout << inteiro/2 << " nota(s) de R$ 2.00\n";
        inteiro %= 2;

        cout << "MOEDAS:\n";
        cout << inteiro << " moeda(s) de R$ 1.00\n";
        cout << moedas/50 << " moeda(s) de R$ 0.50\n";
        moedas %= 50;
        cout << moedas/25 << " moeda(s) de R$ 0.25\n";
        moedas %= 25;
        cout << moedas/10 << " moeda(s) de R$ 0.10\n";
        moedas %= 10;
        cout << moedas/5 << " moeda(s) de R$ 0.05\n";
        moedas %= 5;
        cout << moedas/1 << " moeda(s) de R$ 0.01\n";
        moedas %= 1;
    }
    

}
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
    solve();
    return 0;
}