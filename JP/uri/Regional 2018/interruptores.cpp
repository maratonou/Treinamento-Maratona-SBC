#include "bits/stdc++.h"
 
using namespace std;
 
using ll = long long;
using ii = pair<int, int>;
using ull = unsigned long long;
using vi = vector<int>;

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> lampadas(m+1, 0);
    int l;
    cin >> l;
    for (int i = 0; i < l; i++)
    {
        int aux;
        cin >> aux;
        lampadas[aux] = 1;
    }
    vector<vi> interruptores(n, 0);

    (for i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        interruptores[i].resize(k, 0);
        for (int j = 0; j < k; j++)
        {
            int ki;
            cin >> ki;
            interruptores[i][j] = ki;
        }
    }

}
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
    solve();
    return 0;
}