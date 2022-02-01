#include "bits/stdc++.h"

using namespace std;

#define forn(i, n) for (int i = 0; i < n; i++)
 
using ll = long long;
using f64 = double;
using ii = pair<int, int>;
using ull = unsigned long long;
using vi = vector<int>;
using vii = vector<ii>;

#define size(x) x.size()


const string ENDL = "\n";

void solve()
{
	string s; cin >> s;

    int step = 0;
    int ans = 0;
    for (int i = (int)size(s)-1; i >= 0; i--)
    {
        if (step == 0)
        {
            if (s[i] == '0')
            {
                step = 2;
            }
            else if (s[i] == '5')
            {
                step = 1;
            }
            else
            {
                ans++;
            }
        }
        else if (step == 1)
        {
            if (s[i] == '2' || s[i] == '7')
            {
                break;
            }
            else
            {
                ans++;
            }
        }
        else if (step == 2)
        {
            if (s[i] == '0' || s[i] == '5')
            {
                break;
            }
            else
            {
                ans++;
            }
        }
    }
    int ans2 = 0;
    int step2 = 0;
    if (step == 1)
    {
        for (int i = (int)size(s)-1; i >= 0; i--)
        {
            if (step2 == 0)
            {
                if (s[i] == '0')
                {
                    step2 = 1;
                }
                else
                {
                    ans2++;
                }
            }
            else if (step2 == 1)
            {
                if (s[i] == '0' || s[i] == '5')
                {
                    break;
                }
                else
                {
                    ans2++;
                }
            }
        }
    }
    else
    {
        for (int i = (int)size(s)-1; i >= 0; i--)
        {
            if (step2 == 0)
            {
                if (s[i] == '0')
                {
                    step2 = 1;
                }
                else
                {
                    ans2++;
                }
            }
            else if (step2 == 1)
            {
                if (s[i] == '0' || s[i] == '5')
                {
                    break;
                }
                else
                {
                    ans2++;
                }
            }
        }
    }
    cout << min(ans, ans2) <<  ENDL;
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) solve();
 	return 0;
}