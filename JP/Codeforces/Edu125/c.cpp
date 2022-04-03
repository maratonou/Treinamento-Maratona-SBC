#include "bits/stdc++.h"

using namespace std;

#define forn(i, n) for (int i = 0; i < n; i++)
 
using ll = long long;
using f64 = double;
using ii = pair<int, int>;
using ull = unsigned long long;
using vi = vector<int>;
using vii = vector<ii>;


const string ENDL = "\n";

void solve()
{
	int n; cin >> n;
    string s; cin >> s;
    // cout << "------------------------- NEW CASE -----------------------------------\n";
    int ok = 1;
    string p = "";
    int b = 0;
    int c1 = 1;
    int ini = 0;
    int pos = 0;
    int ans = 0;
    // cout << s << ENDL;
    while (pos < n)
    {
        // cout << "ENTrei\n";
        if (p == "")
        {
            // init
            pos = ini+2;
            if (pos > n)
                break;
            for(int i= ini; i < pos; i++) {
                p+= s[i];
                if (c1 == 1)
                {
                    if(s[i] == '(') b++;
                    else b--;
                    if (b < 0) c1 = 0;
                }
            }
        } else {
            // add 1
            if (pos >= n) break;
            p+= s[pos];
            if (c1 == 1)
            {
                if(s[pos] == '(') b++;
                else b--;
                if (b < 0) c1 = 0;
            }
            pos++;
        }
        if(b != 0 || c1 == 0)
        {
            int c2 = 1;
            for(int i = 0; i < p.size(); i++)
            {
                if (s[i+ini] != s[p.size()-1-i+ini]) { c2 = 0; break;}
            }
            if (c2)
            {
                ini = pos;
                p = "";
                ans++;
                b = 0;
                c1 = 1;
            }
        }
        else
        {
            ini = pos;
            p = "";
            ans++;
            b = 0;
            c1 = 1;
        }
        // cout << ini << ENDL;
        // for(int k = ini; k < n; k++)
        // {
        //     cout << s[k];
        // }
        // cout << ENDL;
    }
    cout << ans << " " << (ini >= n ? 0 : n-ini) << ENDL;
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) solve();
 	return 0;
}