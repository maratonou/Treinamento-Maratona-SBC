#include "bits/stdc++.h"

using namespace std;
 
using ll = long long;
using ii = pair<int, int>;
using ull = unsigned long long;
using vi = vector<int>;

#define MAX 100000

int Primes[MAX+1];
void solve()
{
    int n;
    char c;
    cin >> n >> c;
    string s;
    cin >> s;

    int ok = 1;
    for (auto x: s)
    {
        if (x != c) 
        {
            ok = 0;
            break;
        }
    }
    if (ok)
    {
        cout << "0\n";
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            ok = 1;
            for (int j = i; j <= n; j+=i)
            {
                ok &= (s[j-1] == c);
            }
            if (ok)
            {
                cout << "1\n" << i << "\n";
                break;
            }
        }
        if (!ok)
        {
            cout << "2\n";
            cout << n-1 << " " << n << "\n";
        }
    }
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	cin >> t;
    // sieve();
	while(t--) solve();
 	return 0;
}