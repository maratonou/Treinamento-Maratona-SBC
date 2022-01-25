#include "bits/stdc++.h"

using namespace std;

#define forn(i, n) for (int i = 0; i < n; i++)
 
using ll = long long;
using ii = pair<int, int>;
using ull = unsigned long long;
using vi = vector<int>;
using f64 = double;
using f32 = float;

const string ENDL = "\n";

// (i/n) == ((xi*xi/h)/2)/(h/2) ==> ( (xi^2/h)/2 )*2/h ==> 2*(xi^2/h^2)/2 ==> (xi*h)^2 == i/n
//(xi*h)^2 == i/n
// xi/h == sqrt(i/n) ==> xi = h*sqrt(i/n) 

void solve()
{
	int n, h;
    cin >> n >> h;

    f64 dH = (double)h;
    f64 dN = n;

    for (int i = 1; i < n; i++)
    {
        cout << fixed << setprecision(9) << dH*sqrt(i/dN) << ENDL;
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