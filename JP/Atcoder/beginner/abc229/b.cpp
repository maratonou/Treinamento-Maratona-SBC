#include "bits/stdc++.h"

using namespace std;
 
using ll = long long;
using ii = pair<int, int>;
using ull = unsigned long long;
using vi = vector<int>;


void solve()
{
    string s1;
    string s2;
    cin >> s1 >> s2;

    int easy = 1;
    int hi = (s1.size() > s2.size()) ? s1.size() : s2.size(); 
    int lo = (s1.size() < s2.size()) ? s1.size() : s2.size();

    int mode = 1;
    if (s1.size() == hi)
    {
        mode = 0;
    }

    for (int i = 1; i <= lo; i++)
    {
        if (mode == 0)
        {
            if ((s1[hi-i] -'0') + (s2[lo-i] - '0') >= 10)
            {
                easy = 0;
                break;
            }
        }
        else if (mode == 1)
        {
            if ((s2[hi-i] -'0') + (s1[lo-i] - '0') >= 10)
            {
                easy = 0;
                break;
            }
        }
    }
    if (easy)
    {
        cout << "Easy\n";
        return;
    }
    cout << "Hard\n";
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	// cin >> t;
	while(t--) solve();
 	return 0;
}