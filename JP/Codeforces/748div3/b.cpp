#include "bits/stdc++.h"

using namespace std;
 
using ll = long long;
using ii = pair<int, int>;
using ull = unsigned long long;
using vi = vector<int>;

const string ENDL = "\n";

void solve()
{
    string s;
    ll integer;
    cin >> integer;
    s = to_string(integer);
    if (integer % 25 == 0)
    {
        cout << "0\n";
        return;
    }
    int pos = 0;
    int n = s.size();
    int removed = 0;
    int i;
    int mode = 0;
    for (i = 0; i < n; i++)
    {
        if (pos == 0)
        {
            if (s[i] == '5' || s[i] == '0')
            {
                pos = 1;
                mode = 1;
                // cout << "found " << "s[i] = " << s[i] << ENDL << "----> mode = " << mode << ENDL;
            }
            else if (s[i] == '2' || s[i] == '7')
            {
                pos = 1;
                mode = 0;
                // cout << "found " << "s[i] = " << s[i] << ENDL << "----> mode = " << mode << ENDL;
            }
        }
        else if (pos == 1)
        {
            if (mode == 1)
            {
                if (s[i] == '0')
                {
                    // cout << "found " << "s[i] = " << s[i] << ENDL << "----> mode = " << mode << ENDL;
                    break;
                }
                else
                {
                    removed++;
                    // cout << "not found, number is " << "s[i] = " << s[i] << ENDL << "----> mode = " << mode << ENDL;
                    // cout << "---------> removed = " << removed << ENDL;
                }
            }
            else
            {   
                if (s[i] == '5')
                {
                    // cout << "found " << "s[i] = " << s[i] << ENDL << "----> mode = " << mode << ENDL;
                    break;
                }
                else
                {
                    removed++;
                    // cout << "not found, number is " << "s[i] = " << s[i] << ENDL << "----> mode = " << mode << ENDL;
                    // cout << "---------> removed = " << removed << ENDL;
                    
                }
            }
        }
        else
            break;
    }
    pos = 0;
    int removed1 = 0;
    mode = 0;
    int j;
    for (j = n-1; j >= 0; j--)
    {
        if (pos == 0)
        {
            if (s[j] == '5')
            {
                pos = 1;
                mode = 0;
            }
            else if (s[j] == '0')
            {
                pos = 1;
                mode = 1;
            }
            else
            {
                removed1++;
            }
        }
        else if (pos == 1)
        {
            if (mode == 1)
            {
                if (s[j] == '5' || s[j] == '0')
                {
                    break;
                }
                else
                {
                    removed1++;
                }
            }
            else
            {   
                if (s[j] == '2' || s[j] == '7')
                {
                    break;
                }
                else
                {
                    removed1++;
                }
            }
        }
        else
            break;
    }

    cout << min((removed + n - i-1), removed1) << ENDL;
    // cout << (removed + n-i-1) << " " << removed1 << ENDL;
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) solve();
 	return 0;
}