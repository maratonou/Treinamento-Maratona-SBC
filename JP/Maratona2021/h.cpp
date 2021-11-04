#include "bits/stdc++.h"

using namespace std;
 
using ll = long long;
using ii = pair<int, int>;
using ull = unsigned long long;
using vi = vector<int>;

void solve()
{
    int T, D, M;
    cin >> T >> D >> M;
    vi comida(M+1, 0);
    for (int i = 1; i <= M; i++)
    {
        cin >> comida[i];
    }
    if (T > D)
    {
        cout << "N\n"; 
        return;
    }
    for (int i = 0; i <= M; i++)
    {
        if (comida[i+1]-comida[i]+1 >= T)
        {
            cout << "Y\n";
            // cout << comida[i+1] << " " << comida[i] << "\n";
            return;
        }
    }
    if (D-comida[M]+1 >= T)
    {
        cout << D << " " << comida[M] << "\n";
        cout << "Y\n";
        return;
    }
    cout << "N\n";
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
  solve();
 	return 0;
}