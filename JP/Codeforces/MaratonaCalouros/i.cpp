#include "bits/stdc++.h"

using namespace std;
 
const string _endl = "\n";

using ll = long long;
using ii = pair<int, int>;
using ull = unsigned long long;
using vi = vector<int>;


void solve()
{
    int n;
    cin >> n;
    vi vetor(n, 0);
    int par = 0;
    int impar = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> vetor[i];
    }
    for (int i = 0; i < n; i++)
    {
        int p_id = i % 2;
        int p_e = vetor[i] % 2;
        if (p_id != p_e)
        {
            if (i % 2)
            {
                impar++;
            }
            else
            {
                par++;
            }
        }
    }
    cout << ((par == impar) ? par : -1) << _endl;
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) solve();
 	return 0;
}