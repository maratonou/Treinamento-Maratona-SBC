#include "bits/stdc++.h"

using namespace std;
 
using ll = long long;
using ii = pair<int, int>;
using ull = unsigned long long;
using vi = vector<int>;

int checkPossible(vi &vetor, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (vetor[i] > n)
            return 0;
    }
    vi freq(n+1, 0);
    for (int i = 0; i < n; i++)
    {
        freq[vetor[i]]++;
    }
    for (int i = 2; i < n; i++)
    {
        if (freq[i] > 0)
        {
            if (freq[i] > freq[i-1])
            {
                return 0;
            }
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
    map<int, int> hash;

    if (!checkPossible(vetor, n))
    {
        cout << "-1\n";
        return;
    }

    vi result(n, 0);
    for (int i = 0; i < n; i++)
    {
        hash[vetor[i]]++;
        result[i] = hash[vetor[i]];
    }
    int maior = 0;
    for (int i = 0; i < n; i++)
    {
        if (result[i] > maior)
        {
            maior = result[i];
        }
    }
    cout << maior << "\n";
    for (int i = 0; i < n; i++)
    {
        cout << result[i] << " ";
    }
    cout << "\n";
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	// cin >> t;
	while(t--) solve();
 	return 0;
}