#include "bits/stdc++.h"

using namespace std;
 
using ll = long long;
using ii = pair<int, int>;
using ull = unsigned long long;
using vi = vector<int>;

const int MAXN = 20000;

string senhas[MAXN];

void solve()
{
    int n;
    cin >> n;
    map<string, int> cont;
    for (int i = 0; i < n; i++)
    {
        cin >> senhas[i];
        cont[senhas[i]] += 1;
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        set<string> S;
        int sizeSenha = senhas[i].size();
        for (int l = 0; l < sizeSenha; l++)
        {
            string s;
            for (int r = l; r < sizeSenha; r++)
            {
                s += senhas[i][r];
                if (!S.count(s))
                {
                    S.insert(s);
                    auto it = cont.find(s);
                    if (it != cont.end()) ans += it->second;
                }
                
            }
        }
        ans--;
    }
    cout << ans << "\n";
}

int main() 
{
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	solve();
 	return 0;
}