#include "bits/stdc++.h"

using namespace std;
 
using ll = long long;
using ii = pair<int, int>;
using ull = unsigned long long;

int possible(string s, string sequence, string word) 
{
    string t = word;
    string ans = t;
    string t1;
    for (int i = 0; i < sequence.size(); i++)
    {
        t1 = "";
        for (int j = 0; j < t.size(); j++)
        {
            if (t[j] != sequence[i])
            {
                t1 += t[j];
            }
        }
        t = t1;
        ans += t;
    }
    if (ans.compare(s) != 0)
    {
        return 0;
    }
    return 1;
}

void solve()
{
    string s;
    cin >> s;
    vector<int> freq(26, 0);
    string order = "";
    int k = 0;
    char ch;
    int ans = 0;

    for (int i = 0; i < s.size(); i++)
    {
        freq[s[i] - 'a']++;
        // cout << copy[i] << endl;
        // cout << copy[i] - 'a' << endl; 

    }

    for (int i = 0; i < 26; i++)
    {
        if (freq[i])
        {
            k++;
        }
    }
    // cout << "\n\n";
    for (int i = s.size()-1; i >=0; i--)
    {
        if (i == s.size()-1)
        {
            ch = s[i];
            order = ch + order;
            if (freq[s[i]-'a'] % k)
            {
                cout << "-1\n";
                return;
            }
            ans += freq[s[i]-'a']/k;
            k--;
            // cout << "a1\n";
        }
        if (ch != s[i])
        {
            int j;
            for (j = 0; j < order.size() && order[j] != s[i]; j++);
            // cout << j << endl;
            if (j == order.size())
            {
                // cout << "a2\n";
                ch = s[i];
                order = ch + order;
                // cout << freq[s[i] - 'a'] << " " << k << endl;
                // cout << s[i] - 'a' << endl; 
                // cout << s[i] << endl;
                if (freq[s[i]-'a'] % k)
                {
                    cout << "-1\n";
                    return;
                }
                ans += freq[s[i]-'a']/k;
                k--;
            }
            // cout << "a1\n";
        }
    }
    if (!possible(s, order, s.substr(0, ans)))
    {
        cout << "-1\n";
        return;
    }
    cout << s.substr(0, ans) << " " << order << "\n";

}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) solve();
 	return 0;
}