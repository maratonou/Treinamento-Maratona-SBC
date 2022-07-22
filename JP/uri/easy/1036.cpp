#include "bits/stdc++.h"
 
using namespace std;
 
using ll = long long;
using ii = pair<int, int>;
using ull = unsigned long long;
 
void solve()
{
    double a,b,c;
    cout.setf( ios::fixed, std:: ios::floatfield );
    cout.precision(5);
    cin >> a >> b >> c;
    double raiz = (b*b) - 4.0*a*c;
    // cout << raiz << "\n";
    // cout << raiz << "\n";
    if (raiz < 0 || a == 0)
    {
        cout << "Impossivel calcular\n";
    }
    else
    {
        raiz = sqrt(raiz);
        // cout << a << " " << b << " " << c << "\n";
        double r1 = ((-1*b) + raiz)/(2*a);
        double r2 = ((-1*b) - raiz)/(2*a);
        // cout << r1 << " " << r2 << "\n";
        cout << "R1 = " << r1 << "\n";
        cout << "R2 = " << r2 << "\n";

    }
}

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
    solve();
    return 0;
}