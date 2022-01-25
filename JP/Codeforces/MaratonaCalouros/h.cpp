#include "bits/stdc++.h"

using namespace std;
 
const string _endl = "\n";

using ll = long long;
using ii = pair<int, int>;
using ull = unsigned long long;
using vi = vector<int>;


int AB(string &s)
{
    int ab = 0;
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i-1] == 'a' && s[i] == 'b')
        {
            ab++;
            i++;
        }
    }
    return ab;
}
int BA(string &s)
{
    int ba = 0;
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i-1] == 'b' && s[i] == 'a')
        {
            ba++;
            i++;
        }
    }
    return ba;
}

void solve()
{
	string s;
    cin >> s;
    int ab = AB(s);
    int ba = BA(s);

    int n = s.size();

    while (ab != ba)
    {
        for (int i = n-1; i >= 0; i--)
        {
            if (ab > ba)
            {
                if (s[i] == 'b')
                {
                    s[i] = 'a';
                    ab = AB(s);
                    ba = BA(s);
                }
            }
            else if(ba > ab)
            {
                if (s[i] = 'a')
                {
                    s[i] = 'b';
                    ab = AB(s);
                    ba = BA(s);
                }
            }
        }
    }

    cout << s << "\n";
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) solve();
 	return 0;
}