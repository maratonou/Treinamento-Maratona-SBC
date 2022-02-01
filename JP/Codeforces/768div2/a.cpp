#include "bits/stdc++.h"

using namespace std;

#define forn(i, n) for (int i = 0; i < n; i++)
 
using ll = long long;
using ii = pair<int, int>;
using ull = unsigned long long;
using vi = vector<int>;

const string ENDL = "\n";

void solve()
{
	int n;
    cin >> n;
    vi a(n);
    vi b(n);
    forn(i, n) cin >> a[i];
    forn(i, n) cin >> b[i];

    forn(i, n)
    {
        if (b[i] > a[i])
        {
            int tmp = b[i];
            b[i] = a[i];
            a[i] = tmp;
        }
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    cout << (a[n-1]*b[n-1]) << ENDL;
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) solve();
 	return 0;
}