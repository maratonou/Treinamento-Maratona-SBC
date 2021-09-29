#include "bits/stdc++.h"

using namespace std;
 
using ll = long long;
using ii = pair<int, int>;
using ull = unsigned long long;

#define MAX 1000000

int notPrimes[MAX+1] = {1};
int factors[MAX+1];

void sieve()
{
    for (int i = 2; i <= MAX; i++)
    {
        // cout << notPrimes[i] << " i = " << i << endl;
        if (!notPrimes[i])
        {
            for (int j = i; j <= MAX; j+= i)
            {
                notPrimes[j] = 1;
                factors[j] += 1;
            }
        }
    }
}
void solve(int n)
{
    cout << n << " : " << factors[n] << "\n"; 
}

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	cin >> t;
    sieve();
	while(t)
    {
        solve(t);
        cin >> t;
    }
 	return 0;
}