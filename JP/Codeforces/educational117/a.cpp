#include "bits/stdc++.h"

using namespace std;
 
using ll = long long;
using ii = pair<int, int>;
using ull = unsigned long long;
using vi = vector<int>;

const string ENDL = "\n";

void solve()
{
	int x, y;
    int manhathan;

    cin >> x >> y;
    manhathan = x+y;
    if (manhathan % 2)
    {
        cout << "-1 -1\n";
        return;
    }
    manhathan /= 2;

    if (y > x)
    {
        cout << "0 " << manhathan << "\n";   
    }
    else
    {
        cout << manhathan << " " << "0\n";
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