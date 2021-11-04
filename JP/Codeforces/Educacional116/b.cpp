#include "bits/stdc++.h"

using namespace std;
 
using ll = long long;
using ii = pair<int, int>;
using ull = unsigned long long;
using vi = vector<int>;

int countAB(string s)
{
    int ans = 0;
    for (int i = 0; i < (int)s.size()-1; i++)
    {
        if (s[i] == 'a' && s[i+1] == 'b')
        {
            ans++;
            i++;
        }
    }
    return ans;
}

int countBA(string s)
{
    int ans = 0;
    for (int i = 0; i < (int)s.size()-1; i++)
    {
        if (s[i] == 'b' && s[i+1] == 'a')
        {
            ans++;
            i++;
        }
    }
    return ans;
}

void solve() 
{
    ll pc;
    ll cable;
    cin >> pc >> cable;
    ll hr;
    ll pc_done = 1;
    if (pc == 1)
    {
        cout << 0 << "\n";
        return;
    }
    for (hr = 0; pc_done < cable; hr++)
    {
        pc_done+=pc_done;
    }
    if (pc_done >= pc)
    {
        cout << hr << "\n";
        return;
    }
    pc-= pc_done;
    hr += (pc/cable);
    if (pc % cable != 0)
    {
        hr++;
    } 
    cout << hr << "\n";
}


int main() 
{
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
 	return 0;
}