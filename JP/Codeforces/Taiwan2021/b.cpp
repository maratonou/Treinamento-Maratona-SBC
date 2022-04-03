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

int sumdiv[1000000 + 10];

void sieve()
{
    for (int i = 1; i <= 1000000; ++i)
        for (int j = i; j <= 1000000; j += i)
            sumdiv[j] += i;
}

void solve()
{
	int n; cin >> n;
    if (sumdiv[n]-n > n)
        cout << "abundant\n";
    else if (sumdiv[n]-n < n)
        cout << "deficient\n";
    else
        cout << "perfect\n";
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	cin >> t;
    sieve();
	while(t--) solve();
 	return 0;
}