#include "bits/stdc++.h"

using namespace std;
 
using ll = long long;
using ii = pair<int, int>;
using ull = unsigned long long;
using vi = vector<int>;


void solve()
{
	int n;
    cin >> n;
    vi vetor(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> vetor[i];
    }
    sort(vetor.begin(), vetor.end());

    for (int i = 1; i < n; i++)
    {
        if (vetor[i] % vetor[0] != 0)
        {
            cout << "-1\n";
            return;
        }
    }
    cout << vetor[0] << "\n";
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	// cin >> t;
	while(t--) solve();
 	return 0;
}