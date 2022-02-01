#include "bits/stdc++.h"

using namespace std;

#define forn(i, n) for (int i = 0; i < n; i++)
 
using ll = long long;
using f64 = double;
using ii = pair<int, int>;
using ull = unsigned long long;
using vi = vector<int>;
using vii = vector<ii>;

const int N = 60;

const string ENDL = "\n";

ll binToDec(string &s, ll &len)
{
    ll n = 0;
    ll value = 1;
    for (ll i = len-1; i >= 0; i--)
    {
        if (s[i] == '1')
        {
            n+=value;
        }
        value *= 2;
    }
    return n;
}
void solve()
{
    ll k; cin >> k;
    cin.ignore();
    string s; cin >> s;
    ll n = s.size();
    // buildDP(k, s, n);
    // int max_i = 0, max_j = s.size()-1;
    vector<ll> freq(2, 0);
    forn(i, n) freq[s[i] - '0']++;
    ll sub_size = n;
    while (binToDec(s, sub_size) > k)
    {
        if (freq[1] > 1)
        {
            for(ll i = 1; i < sub_size; i++)
            {
                if (s[i] == '1')
                {
                    s.erase(s.begin()+i);
                    freq[1]--;
                    break;
                }
            }
        }
        else
        {
            s.erase(s.begin()+sub_size-1);
        }
        sub_size--;
    }
    cout << (n - sub_size) << ENDL;
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	// cin >> t;
	while(t--) solve();
 	return 0;
}