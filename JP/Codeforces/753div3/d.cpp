#include "bits/stdc++.h"

#define forn(i, n) for (int i = 0; i < n; i++)

using namespace std;
 
using ll = long long;
using ii = pair<int, int>;
using ull = unsigned long long;
using vi = vector<int>;

const string ENDL = "\n";

void solve()
{
	int n;
    cin >> n;
    vi vetor(n, 0);

    for (int i = 0; i < n; i++)
    {
        cin >> vetor[i];
    }

    string s;
    cin >> s;

    vi l, r;

    forn(i, n)
        (s[i] == 'B' ? l:r).push_back(vetor[i]);

    sort(l.begin(), l.end());
    sort(r.begin(), r.end(), greater<int>());
    
    forn(i, (int)l.size())
        if (l[i] < i+1)
        {
            cout << "NO\n";
            return;
        }
    
    forn(i, (int)r.size())
        if (r[i] > n-i)
        {
            cout << "NO\n";
            return;
        }
    cout << "YES\n";
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) solve();
 	return 0;
}