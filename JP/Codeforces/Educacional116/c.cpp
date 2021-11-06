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
    int n, k;
    cin >> n >> k;
    vi notas(n, 0);
    vi valores(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> notas[i];
        valores[i] = pow(10 , notas[i]);
        // cout << valores[i] << " ";
    }
    // cout << "\n";
    vector<ll> amount(n, 0);
    int current = 0;
    for (int i = 0; i < n; i++)
    {
        if (i == n-1)
        {
            amount[i] = k-current+1;
        }
        else
        {
            int max_i_notes = (valores[i+1]/valores[i])-1;
            if (max_i_notes+current <= k)
            {
                amount[i] = max_i_notes;
                current += max_i_notes;
            }
            else
            {
                // cout << " k " << k << " last "  << k-current+1 << "\n";
                amount[i] = k-current+1;
                break;
            }
        }
    }
    ll value = 0;
    for (int i = 0; i < n; i++)
    {
        if (amount[i] == 0)
            break;
        value += valores[i] * amount[i];
    }
    cout << value << "\n";
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