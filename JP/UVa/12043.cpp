#include "bits/stdc++.h"

using namespace std;
 
using ll = long long;
using ii = pair<int, int>;
using ull = unsigned long long;

#define MAX 100000

ll divisors[MAX+1];
ll sumDivisors[MAX+1];

void sieve()
{
    for (int i = 1; i <= MAX; i++)
    {
        for (int j = i; j <= MAX; j+= i)
        {
            ++divisors[j];
            sumDivisors[j] += i;
        }
    }
}
void solve()
{
    int a,b,k;
    cin >> a >> b >> k;

    ll g,h;
    g = h = 0;

    for (int i = a + (k - a % k) % k; i <=b; i += k)
    {
            g += divisors[i];
            h += sumDivisors[i];
    }
    cout << g << " " << h << "\n";
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