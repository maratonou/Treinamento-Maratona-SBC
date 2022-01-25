#include "bits/stdc++.h"
 
using namespace std;
 
using ll = long long;
using ii = pair<int, int>;
using ull = unsigned long long;

#define UP 1;
#define DOWN 2;

int inMatrix(int line, int column, int size)
{
    if (line >= size)
    {
        return 0;
    }
    if (column >= size)
    {
        return 0;
    }
    return 1;
}

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int n = 0;
    ll ans;

	cin >> n;
    for (int i = 1; i <= n; i++)
    {
        ll pieces = i*i;
        ans = (pieces*(pieces-1))/2;

        for (int l = 0; l < i; l++)
        {
            for (int c = 0; c < i; c++)
            {
                // if (inMatrix(l+2, c+1, i))
                // {
                //     // cout << "pos: " << l << " " << c << "\nCalculating for " << l+2 << " " << c+1 << "\n";
                //     ans-=2;
                // }
                // if (inMatrix(l+1, c+2, i))
                // {
                //     // cout << "pos: " << l << " " << c << "\nCalculating for " << l+1 << " " << c+2 << "\n";
                //     ans-=2;
                // }
            }
        }
        cout << ans << "\n";
    }

 	return 0;
}