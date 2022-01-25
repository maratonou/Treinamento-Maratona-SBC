#include "bits/stdc++.h"

using namespace std;

#define forn(i, n) for (int i = 0; i < n; i++)
 
using ll = long long;
using ii = pair<int, int>;
using ull = unsigned long long;
using vi = vector<int>;

const string ENDL = "\n";

int getTreeOne(int a, int b)
{
    int ans = 0;
    while (a && b)
    {
        // cout << "1 - " << a << " " << b << ENDL;
        // cout << "-> ans before = " << ans << ENDL;
        if (a > b)
        {
            int aux = min(a/3, b);
            // cout << "aux a > b " << aux << "\n";
            if (aux == b)
            {
                return aux+ans;
            }
            a /= 3;
            b -= aux;
            ans += aux;
            // cout << "       2 - " << a << " " << b << ENDL;
        }
        else if (b > a)
        {
            int aux = min(b/3, a);
            // cout << "aux b > a" << aux << "\n";
            if (aux == a)
            {
                return aux+ans;
            }
            b /= 3;
            a -= aux;
            ans += aux;
            // cout << "       3 - " << a << " " << b << ENDL;
        }
        else
        {
            return (a/2)+ans;
        }
    }
    return ans;
}

void solve()
{
	int a, b;
    cin >> a >> b;

    cout << min(((a+b)/4), min(a,b)) << ENDL;
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) solve();
 	return 0;
}