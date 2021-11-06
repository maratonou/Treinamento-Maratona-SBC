#include "bits/stdc++.h"

using namespace std;
 
using ll = long long;
using ii = pair<int, int>;
using ull = unsigned long long;
using vi = vector<int>;

void solve()
{
    string s;
    cin >> s;

    string rest = "";
    int index = 0;
    for (int i = 0; i < (int) s.size(); i++)
    {
        index = i;
        if (rest.empty())
        {
            if (s[i] == '5' || s[i] == '0')
            {
                rest = s[i] + rest;
            }
        }
        else
        {
            if (rest[0] == '5')
            {
                if (s[i] == 2 || s[i] == 7)
                {
                    rest = s[i] + rest;
                    break;
                }
            }
            else
            {
                if (s[i] == 5)
                {
                    rest = s[i] + rest;
                    break;
                }
            }
        }
    }
    for (int i = 0; i <= index; i++)
    {
        rest = s[i] + rest;
    }

    ll n;
    n = stoi(rest);
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) solve();
 	return 0;
}