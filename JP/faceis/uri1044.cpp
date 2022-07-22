#include "bits/stdc++.h"

using namespace std;

#define forn(i, n) for (int i = 0; i < n; i++)
 
using ll = long long;
using f64 = double;
using ii = pair<int, int>;
using ull = unsigned long long;
using vi = vector<int>;
using vii = vector<ii>;


const string ENDL = "\n";

void solve()
{
	float a,b,c; cin >> a >> b >> c;

    if (c >= a && c >= b)
    {
        float tmp = a;
        a = c;
        c = tmp;
    }
    else if (b >= a && b >= c)
    {
        float tmp = a;
        a = b;
        b = tmp;
    }
    if (a >= b+c){
        cout << "NAO FORMA TRIANGULO\n";
    }
    else {
        if (a*a == b*b + c*c) {
            cout << "TRIANGULO RETANGULO\n";
        }
        if (a*a > b*b + c*c) {
            cout << "TRIANGULO OBTUSANGULO\n";
        }
        if (a*a < b*b + c*c) {
            cout << "TRIANGULO ACUTANGULO\n";
        }
        if (a == b && b == c) {
            cout << "TRIANGULO EQUILATERO\n";
        }
        if ((a == b && b != c) || (a == c && b != c)
        || (b == a && a != c) || (b == c && a != c)
        || (c == b && b != a) || (c == a && b != a)) {
            cout << "TRIANGULO ISOSCELES\n";
        }
    }
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	// cin >> t;
	while(t--) solve();
 	return 0;
}