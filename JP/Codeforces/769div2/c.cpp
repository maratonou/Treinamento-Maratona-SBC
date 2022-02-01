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
	int a, b;
    cin >> a >> b;
    int k;
    for(k = 1; a > k; k<<=1);
    int aux = 0;
    for (; b >= k; k<<=1)
    {
        if (k & b)
            aux = aux | k;
    }
    aux |= a;
    int offset = aux-b;
    // cout << offset+1 << " " << aux << ENDL;

    int c = 0;
    for (int i = a; i != b; i++)
    {
        c++;
        if ((i | b) == b)
        {
            i |= b;
            break;
        }
    }
    int d;
    for (int i = a; i != b; i++)
    {
        c++;
        if ((i | b) == b)
        {
            i |= b;
            break;
        }
    }

    if (b == (b|a))
        cout << 1 << ENDL;
    else if (aux == a)
        cout << 1 << ENDL;
    else
        cout << min(min(offset+1, b-a), c) << ENDL;

}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) solve();
 	return 0;
}