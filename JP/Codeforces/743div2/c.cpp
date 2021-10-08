#include "bits/stdc++.h"

using namespace std;
 
using ll = long long;
using ii = pair<int, int>;
using ull = unsigned long long;



void solve()
{
    int n;
    cin >> n;
    int k;
    vector<int> *required = new vector<int>[n];
    int ok = 0;
    for (int i = 0; i < n;)
    {
        cin >> k;
        if (k == 0)
        {
            ok = 1;
        }
        required[i].resize(k, 0);
        for (int j = 0; j < k; j++)
        {
            cin >> required[i][j];
        }
    }
    if (ok == 0)
    {
        cout << "-1\n";
        return;
    }
    vector<int> bits(n, 0);


    for (int i = 0; i < n; i++)
    {
        if (required[i].size() == 0)
        {
            bits[i] = 1;
        }
        else
        {
            int understood = 1;
            for (int j = 0; j < required[i].size(); j++)
            {
                if ( !bits[ required[i][j]-1 ] )
                {
                    understood = 0;
                    break;
                }
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