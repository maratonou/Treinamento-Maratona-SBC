#include "bits/stdc++.h"

using namespace std;

#define forn(i, n) for (int i = 0; i < n; i++)
 
using ll = long long;
using ii = pair<int, int>;
using ull = unsigned long long;
using vi = vector<int>;

const string ENDL = "\n";

void solve()
{
    // cin.ignore();
	string s;
    cin >> s;
    if ((int)s.size() < 2)
    {
        cout << "-1\n";
        return;
    }
    int n = s.size();
    int ok = 0;
    forn(i, n-1)
    {
        if (i == 0)
            i++;
        if (s[i] != s[i+1])
        {
            ok = 1;
            break;
        }
    }
    if (!ok)
    {
        cout << "-1\n";
        return;
    }
    ok = 0;
    int menor_id = 0;
    int menor_delta = 20;
    for(int i = n-2; i >= 0; i--)
    {
        // cout << i << ENDL;
        for (int j = i+1; j < n; j++)
        {
            // cout << "s[i], s[j], s[i] > s[j] ? ===== " << s[i] << ", " << s[j] << ", " << (s[i] > s[j]) << ENDL;
            if (s[i] > s[j])
            {
                if (menor_delta > s[i]-s[j])
                {
                    menor_id = j;
                    menor_delta = s[i]-s[j];
                    ok = 1;
                }
            }
        }
        if (ok)
        {
            if (i == 0)
            {
                if (s[menor_id] == '0')
                {
                    cout << "-1\n";
                    return;
                }
            }
            char aux;
            aux = s[i];
            s[i] = s[menor_id];
            s[menor_id] = aux;
            cout << s << ENDL;
            return;
        }
    }
    if (!ok)
    {
        cout << "-1\n";
        return;
    }
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	// cin >> t;
	while(t--) solve();
 	return 0;
}