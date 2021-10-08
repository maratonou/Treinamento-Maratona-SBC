#include "bits/stdc++.h"
 
using namespace std;
 
using ll = long long;
using ii = pair<int, int>;
using ull = unsigned long long;
 
void solve()
{
    int n;
    cin >> n;
    int wins = 0;
    for (int i = 0; i < n; i++)
    {
        int porta;
        cin >> porta;
        if (porta > 1)
        {
            wins++;
        }
    }
    cout << wins << "\n";
}
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
    solve();
    return 0;
}