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
    string s;
    cin >> s;
    int AB = countAB(s);
    int BA = countBA(s);
    while (AB != BA)
    {
        for (int i = s.size()-1; i >= 0; i++)
        {
            if (AB > BA)
            {
                if (s[i] == 'b')
                {
                    s[i] = 'a';
                    AB = countAB(s);
                    BA = countBA(s);
                    // break;
                }
            }
            else if (BA > AB)
            {
                if (s[i] == 'a')
                {
                    s[i] = 'b';
                    AB = countAB(s);
                    BA = countBA(s);
                    // break;
                }
            }
            else
            {
                break;
            }
        }
    }
    cout << s << "\n";
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