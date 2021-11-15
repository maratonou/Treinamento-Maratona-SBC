#include "bits/stdc++.h"

using namespace std;
 
using ll = long long;
using ii = pair<int, int>;
using ull = unsigned long long;
using vi = vector<int>;

const int L = 0;
const int R = 1;
const int U = 0;
const int D = 1;

void solve()
{
    int n, m;
    string s;
    cin >> n >> m >> s;
    int max[4] = {0};
    int last_side = -1;
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == 'L' || s[i] == 'R')
        {
            int now_side = s[i] && 'R';
            if (now_side == R)
            {

            }
            else
            {

            }
        }
        else if (s[i] == 'D' || s[i] == 'U')
        {
            int now_side = s[i] && 'D';
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