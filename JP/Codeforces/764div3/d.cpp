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
	vi freq(26, 0);
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int maior;
    forn(i, n)
    {
        freq[s[i]-'a'] += 1;
    }
    int ok = 0;
    int ans = 1;
    while (1)
    {

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