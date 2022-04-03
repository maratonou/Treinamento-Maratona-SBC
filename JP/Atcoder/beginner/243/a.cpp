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
	int v, a,b,c;
    cin >> v >> a >> b >> c;
    while (true) {
        if (v >= a) {
            v-=a;
            if (v>=b) {
                v-=b;
                if (v>=c) {
                    v-=c;
                }
                else {
                    cout << "T\n";
                    return;
                }
            }
            else {
                cout << "M\n"; 
                return;
            }
        }
        else {
            cout << "F\n";
            return;
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