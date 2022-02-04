#include "bits/stdc++.h"

using namespace std;

#define forn(i, n) for (int i = 0; i < n; i++)
 
using ll = long long;
using f64 = double;
using ii = pair<int, int>;
using ull = unsigned long long;
using vi = vector<int>;
using vii = vector<ii>;
using ugraph = vector<vi>;
using dgraph = vector<vii>;

#define sz(x) x.size()

const string ENDL = "\n";

void solve()
{
	int n; cin >> n;
    map<int, int> m;
    vi monsters(n);
    int maior = 0;
    forn(i, n) 
    {
        cin >> monsters[i];
        m[monsters[i]] = i+1;
        if (monsters[i] > maior)
            maior = monsters[i];
    }
    int fib1 = 0;
    int fib2 = 1;
    while (fib2 < maior)
    {
        int id = -1;
        forn(i, n)
        {
            if (fib2 == monsters[i])
                id = i;
        }
        if (id > -1)
        {
            forn(i, n)
            {
                if (id != i)
                {
                    if (fib1+fib2 == monsters[i])
                    {
                        cout << id+1 << " " << i+1 << ENDL;
                        return;
                    }
                }
            }
        }
        int aux = fib2;
        fib2 = fib2+fib1;
        fib1 = aux;
    }
    cout << "impossible\n";

}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	// cin >> t;
	while(t--) solve();
 	return 0;
}