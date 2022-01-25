#include "bits/stdc++.h"

using namespace std;
 
const string _endl = "\n";

using ll = long long;
using ii = pair<int, int>;
using ull = unsigned long long;
using vi = vector<int>;


void solve()
{
	string s;
    cin >> s;
    vi freq(27, 0);
    for (int i = 0; i < (int)s.size(); i++)
    {
        freq[s[i] - 'A']++;
    }
    int n = s.size();

    vector<pair<char, int>> pares;
    vector<pair<char, int>> impares;

    for (int i = 0; i <= 26; i++)
    {
        if (freq[i]%2)
        {
            impares.push_back(make_pair((i+'A'), freq[i]));
        }
        else if(freq[i] > 0)
        {
            pares.push_back(make_pair((i+'A'), freq[i]));
        }
    }
    if (n%2)
    {
        if (impares.size() > 1)
        {
            cout << "NO SOLUTION\n";
            return;
        }
    }
    else
    {
        if (!impares.empty())
        {   
            cout << "NO SOLUTION\n";
            return;
        }
    }
    string opa = "";
    string opa_reverse = "";
    for (int i = 0; i < pares.size(); i++)
    {
        for (int j = 0; j < pares[i].second/2; j++)
        {
            opa += pares[i].first;
            opa_reverse += pares[i].first;
        }
    }
    reverse(opa_reverse.begin(), opa_reverse.end());
    for (int i = 0; i < impares.size(); i++)
    {
        for (int j = 0; j < impares[i].second; j++)
        {
            opa += impares[i].first;
        }
    }

    cout << opa + opa_reverse << _endl;
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	// cin >> t;
	while(t--) solve();
 	return 0;
}