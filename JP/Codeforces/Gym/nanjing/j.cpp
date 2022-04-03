#include "bits/stdc++.h"

using namespace std;

#define forn(i, n) for (int i = 0; i < n; i++)
 
using ll = long long;
using f64 = double;
using ii = pair<int, int>;
using ull = unsigned long long;
using vi = vector<int>;
using vii = vector<ii>;


const string ENDL = "\n";

#define MAX 1000000000
#define VETOR_SIZE 1000000
int MAX_SQRT = sqrt(MAX);

int divisors[VETOR_SIZE];

void sieve()
{
	for(int i = 1; i <= MAX_SQRT; i++)
	{
		for(int j = i; j <= MAX_SQRT; j+=i)
		{

		}
	}
}
void solve()
{
	int a, b;
	cin >> a >> b;
	vi div;
	set<int> primes;
	while (a > 1 && b > 1)
	{
		div.clear();
		primes.clear();
		for(int i = 2; i < sqrt(min(a, b)); i++)
		{
			if (a %i == 0 && b % i == 0)
			{
				
			}
		}
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