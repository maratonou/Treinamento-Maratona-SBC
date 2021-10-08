#include "bits/stdc++.h"
 
using namespace std;
 
using ll = long long;
using ii = pair<int, int>;
using ull = unsigned long long;
 
void solve()
{
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    if (a % 2 == 0)
    {
        if(b > c && d > a)
        {
            if (c+d > b+a)
            {
                if (c > 0 && d > 0)
                {
                    cout << "Valores aceitos\n";
                    return; 
                }
            }
        }
    }
    cout << "Valores nao aceitos\n";
}
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
    solve();
    return 0;
}