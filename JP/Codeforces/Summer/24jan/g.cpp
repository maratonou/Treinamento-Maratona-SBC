#include "bits/stdc++.h"

using namespace std;

#define forn(i, n) for (int i = 0; i < n; i++)
 
using ll = long long;
using ii = pair<int, int>;
using ull = unsigned long long;
using vi = vector<int>;

const string ENDL = "\n";

int allEqual(string &s)
{
    for (int i = 0; i < (int)s.size()-1; i++)
    {
        if (s[i] != s[i+1])
            return 0;
    }
    return 1;
}

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    map<char, int> freq;
    vi ans;

    for (int i = 0; i < n; i++)
        freq[s[i]]+=1;

    if (freq['W'] % 2 && freq['B'] % 2)
    {
        cout << "-1\n";
        return;
    }
    if (freq['W'] && freq['B'])
    {
        char commom;
        char notcommom;
        if (freq['W'] % 2)
        {
            commom = 'W';
            notcommom = 'B';
        }
        else if (freq['B'] % 2)
        {
            commom = 'B';
            notcommom = 'W';
        }
        else if (freq['W'] > freq['B'])
        {
            commom = 'W';
            notcommom = 'B';
        }
        else
        {
            commom = 'B';
            notcommom = 'W';
        }
        // cout << commom << ENDL;
        int lo = 0;

        while (!allEqual(s))
        {
            if (lo != n-1)
            {
                if (s[lo] != commom)
                {
                    if (s[lo+1] == commom)
                    {
                        s[lo] = commom;
                        s[lo+1] = notcommom;
                        ans.push_back(lo+1);
                    }
                    else
                    {
                        s[lo] = commom;
                        s[lo+1] = commom;
                        ans.push_back(lo+1);
                    }
                }   
            }
            lo = (lo+1) % n;
        }
    }
    else
    {
        cout << "0\n";
        return;
    }
    cout << (int)ans.size() << ENDL;
    for (int i = 0; i < (int)ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << ENDL;
    // cout << s << ENDL;
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	// cin >> t;
	while(t--) solve();
 	return 0;
}