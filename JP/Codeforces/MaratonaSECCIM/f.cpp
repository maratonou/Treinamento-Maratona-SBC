#include "bits/stdc++.h"

using namespace std;
 
using ll = long long;
using ii = pair<int, int>;
using ull = unsigned long long;
using vi = vector<int>;


int allEqual(vi &vetor, int n)
{
    for (int i = 1; i < n; i++)
    {
        if (vetor[0] != vetor[i])
        {
            return 0;
        }
    }
    return 1;
}

void solve()
{
    int n;
    cin >> n;
    vi vetor(n,0);
    for (int i = 0; i < n; i++)
    {
        cin >> vetor[i];
    }
    sort(vetor.begin(), vetor.end());
    while (!allEqual(vetor, n))
    {
        for (int i = 1; i < n; i++)
        {
            if (vetor[0] < vetor[i])
                vetor[i] -= vetor[0];
        }
        sort(vetor.begin(), vetor.end());
    }
    cout << vetor[0]*n << "\n";
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	// cin >> t;
	while(t--) solve();
 	return 0;
}