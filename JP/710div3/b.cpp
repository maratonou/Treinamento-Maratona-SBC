#include "bits/stdc++.h"

using namespace std;
 
using ll = long long;
using ii = pair<int, int>;
using ull = unsigned long long;

void solve()
{
    int n, k;
    cin >> n >> k;


    vector<char> chs(n);
    for (int i = 0; i < n; i++)
    {
        cin >> chs[i];
    }

    int cont;
    for (cont = 0; chs[cont] != '*' && cont < n; cont++);
    chs[cont] = 'x';
    int first = cont;

    int last = -1;
    for (int i = cont+1; i < n; i++)
    {
        if (chs[i] == '*')
        {
            last = i;
        }
    }
    int ans = 1;

    int actual_i = first;
    while (actual_i < last)
    {
        int pos = -1;
        for (int i = actual_i+1; i < n && i-actual_i <= k; i++) if(chs[i] == '*') pos = i;
        actual_i = min(last, pos);
        chs[actual_i] = 'x';
        ans++;
    }
    cout << ans << endl; 
    // for (int i = 0; i < n; i++)
    // {
    //     cout << chs[i];
    // }
    // cout << endl;
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) solve();
 	return 0;
}