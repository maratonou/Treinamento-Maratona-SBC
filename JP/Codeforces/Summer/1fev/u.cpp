#include "bits/stdc++.h"

using namespace std;

#define forn(i, n) for (int i = 0; i < n; i++)
 
using ll = long long;
using f64 = double;
using ii = pair<int, int>;
using ull = unsigned long long;
using vi = vector<int>;
using vii = vector<ii>;
using ugraph = vector<vi>;
using dgraph = vector<vii>;

#define size(x) x.size()

const string ENDL = "\n";

void solve()
{
    int n;
    cin >> n;
    cin.ignore();
    vector<string> s(n);
    vector<string> q(n);
    for (int i = 0; i < n; i++) cin >> s[i];
    for (int i = 0; i < n; i++) cin >> q[i];

    for (int i = 0; i < n; i++) cout << s[i] << " " << q[i] << ENDL;
    cout << ENDL;
    // for (int i = 0; i < n; i++) cout << s1[i] << " " << s2[i] << ENDL; 
    set<string> t;
    vi resp;
    int ans = 0;
    for(int i = 0; i < n; i++)
    {
        cout << s[i] << " " << q[i] << ENDL;
        if (t.empty())
        {
            if (s[i] == q[i])
                resp.push_back(1);
            else
            {
                t.insert(s[i]);
                cout << s[i] << " s[i] nao tem no set, adiciona\n";
            }
        }
        else
        {
            ans++;
            set<string>::iterator its = t.find(s[i]);
            set<string>::iterator itq = t.find(q[i]);
            if (itq == t.end())
            {
                t.insert(q[i]);
            }
            else
            {
                cout << q[i] << " q[i] tem no set, remove\n";
                t.erase(its);
            }
            if (t.find(s[i]) == t.end())
            {
                cout << s[i] << " s[i] nao tem no set, adiciona\n";
                t.insert(s[i]);
            }
            if(t.empty())
            {
                cout << "fechou esse set, vai pro proximo\n";
                resp.push_back(ans);
                ans = 0;
            }
        }
    }

    cout << ENDL;
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) solve();
 	return 0;
}