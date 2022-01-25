#include "bits/stdc++.h"

using namespace std;
 
const string _endl = "\n";

using ll = long long;
using ii = pair<int, int>;
using ull = unsigned long long;
using vi = vector<int>;


void solve()
{
	int n;
    cin >> n;
    int side = 0;
    int waiting = 0;
    int time = 0;
    for (int i = 0; i < n; i++)
    {
        int s, t;
        cin >> t >> s;
        if (i == 0)
        {
            side = s;
            time = t+10;
            continue;
        }
        if (s == side)
        {
            if (time > t)
                time = t+10;
            else 
            {
                if (waiting)
                {
                    time = time+10;
                    if (time > t)
                    {
                        side = !side;
                        waiting = 1;
                    }
                    else
                    {
                        time = t+10;
                        waiting = 0;
                    }
                }
                else
                {
                    time = t+10;
                }
            }
        }
        else
        {
            if (time > t)
            {
                waiting = 1;
            }
            else
            {
                side = !side;
                time = t + 10;
                waiting = 0;
            }
        }
        // cout << time << "\n";
    }
    if (waiting)
        time = time+10;
    cout << time << "\n";
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	// cin >> t;
	while(t--) solve();
 	return 0;
}