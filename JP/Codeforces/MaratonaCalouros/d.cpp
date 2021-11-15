#include "bits/stdc++.h"

using namespace std;
 
const string _endl = "\n";

using ll = long long;
using ii = pair<int, int>;
using ull = unsigned long long;
using vi = vector<int>;


void solve()
{
	int x, y, z;
    cin >> x >> y >> z;

    if(x == y && y == z)
    {
        // cout << "equal\n";
        cout << "YES\n";
        cout << x << " " << x << " " << x << _endl;
    }
    else if (x == y && x > z) // a
    {
        // cout << "a\n";
        cout << "YES\n";
        cout << x << " " << z << " " << z << _endl;
    }
    else if(z == y && y > x) // c
    {
        // cout << "c\n";
        cout << "YES\n";
        cout << x << " " << x << " " << y << _endl;
    }
    else if (x == z && z > y) // b
    {
        // cout << "b\n";
        cout << "YES\n";
        cout << y << " " << x << " " << y << _endl;
    }
    else 
    {
        cout << "NO\n";
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