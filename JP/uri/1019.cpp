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
    int n;
    cin >> n;
    int valueSMin = 60;
    int valueSHora = valueSMin * 60;

    // cout << n << " " << valueSHora << " " << n/valueSHora << "\n";
    
    int qtdHr = n/valueSHora;
    n = n%valueSHora;
    int qtdMin = n/valueSMin;
    n = n%valueSMin;
    int qtdS = n;
    printf("%d:%d:%d\n", qtdHr, qtdMin, qtdS);

    return 0;
}