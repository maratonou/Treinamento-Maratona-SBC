#include "bits/stdc++.h"

using namespace std;

#define forn(i, n) for (int i = 0; i < n; i++)
 
using ll = long long;
using ii = pair<int, int>;
using ull = unsigned long long;
using vi = vector<int>;

const string ENDL = "\n";

int m[300000];

void solve()
{
	int n; cin >> n;
    int k;
    for (k = 1; n > 2*k; k*=2);
    for (int i = n-1; i >= k; i--) cout << i << " ";
    for (int i = 0; i < k; i++) cout << i << " ";
    cout << ENDL;
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) solve();
 	return 0;
}