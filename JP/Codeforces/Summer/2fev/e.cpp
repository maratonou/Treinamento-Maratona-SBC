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

int ehPrimo(int n)
{
    if (n == 1) return 0;
    if (n == 2) return 1;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n%i == 0)
            return 0;
    }
    return 1;
}

int convertToInt(string &s, int &n_after)
{
    n_after = 0;
    int id_point = 0;
    int n = sz(s);

    forn(i, n)
    {
    }

    return (stoi(s));
}

void solve()
{
    string a, b;
    cin >> a >> b;

    forn(i, (int)sz(a))
    {
        if (a[i] == '.')
        {
            a.erase(a.begin()+i);
        }
    }
    forn(i, (int)sz(b))
    {
        if (b[i] == '.')
        {
            b.erase(b.begin()+i);
        }
    }


    int ai = stoi(a);
    int bi = stoi(b);

    int gcd = __gcd(ai, bi);
    ai/=gcd;
    bi/=gcd;
    if (ehPrimo(ai) && ehPrimo(bi))
        cout << ai << " " << bi << ENDL;
    else
        if (ai == 1 && bi == 1) cout << "2 2\n";
        else cout << "impossible\n";
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) solve();
 	return 0;
}