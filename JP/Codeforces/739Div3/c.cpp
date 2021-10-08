#include "bits/stdc++.h"
#include <math.h>

 
using namespace std;
 
using ll = long long;
using ii = pair<int, int>;
using ull = unsigned long long;
 
void solve()
{
    int k;
    cin >> k;

    int sqr = ceil(sqrt(k));
    int maior = sqr * sqr;
    if (k > maior - sqr ) //linha
    {
        cout << sqr << " " << maior - k + 1 << "\n";
        
    }
    else
    {
        int menor = (sqr-1) * (sqr - 1) + 1;
        cout << k - menor + 1 << " " << sqr << "\n";
    }
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) solve();
 	return 0;
}