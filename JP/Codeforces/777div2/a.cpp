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
	int n; cin >> n;
    if (n <= 2)
        cout << n << ENDL;
    else
    {
        int mode = n%2;
        if (n%3)
        {
            int mod3 = n%3;
            n-= mod3;
            cout << mod3;
            if (mod3 <=2 )
            {
                if (mod3 == 1)
                    mode = 1;
                else
                    mode = 0;
            }
        }
        else if (n % 3 == 0)
        {
            mode = 1;
        }
        while (n)
        {
            if (mode == 0)
            {
               cout << "1";
                mode = 1;
                n-=1;
            }
            else if (mode == 1)
            {
               cout << "2";
                mode = 0;
                n-=2;
            }
        }
        cout << ENDL;
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