#include "bits/stdc++.h"

using namespace std;
 
using ll = long long;
using ii = pair<int, int>;
using ull = unsigned long long;

int ehPrimo(int n)
{
    int sqr = sqrt(n);
    for (int i = 2; i <= sqr; i++)
    {
        if ( n%i == 0 )
        {
            return 0;
        }
    }
    return 1;
}
int divisorsCount(int n, vector<int> factors)
{
    int total = 1;
    for (int i = 0; i < factors.size() && factors[i]*factors[i] <= n; i++)
    {
        int d = 0;
        while (n % factors[i] == 0)
        {
            d += 1;
            // cout << "a1\n";
            n /= factors[i];
            // cout << "a2\n";
        }
        total *= d + 1;
    }
    if (n > 1)
    {
        total *= 2;
    }
    return total;
}
void solve()
{
    int l;
    int u;
    cin >> l >> u;

    int d = 0;
    int p = -1;
    // cout << "a0 main\n";
    for (int n = l; n <= u; n++)
    {
        // cout << "a1 main\n";
        int sqr = sqrt(n);
        // cout << "a3\n";
        vector<int> primes;

        for (int i = 2; i <= sqr; i++)
        {
            if (n % i == 0)
            {
                if (ehPrimo(i))
                {
                    primes.push_back(i);
                }
            }
        }
        int last_d = d;
        d = max(divisorsCount(n, primes), d);
        if (d != last_d)
        {
            p = n;
        }
    }

    printf("Between %d and %d, %d has a maximum of %d divisors.\n", l, u, p, d);
}

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) solve();
 	return 0;
}