#include "bits/stdc++.h"
 
using namespace std;
 
using ll = long long;
using ii = pair<int, int>;
using ull = unsigned long long;
 
void solve()
{

}
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
    int dias;
    cin >> dias;
    int diasAno = 365;
    int diasMes = 30;

    // cout << n << " " << valueSHora << " " << n/valueSHora << "\n";
    
    int qtdAno = dias/diasAno;
    dias = dias % diasAno;
    int qtdMes = dias / diasMes;
    dias = dias % diasMes;
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", qtdAno, qtdMes, dias);

    return 0;
}