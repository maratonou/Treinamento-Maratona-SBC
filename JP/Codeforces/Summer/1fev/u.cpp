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

    #ifdef DEBUG
    for (int i = 0; i < n; i++) cout << s[i] << " " << q[i] << ENDL;
    cout << ENDL;
    #endif
    set<string> t;
    int ans = 0;
    vi resp;
    for(int i = 0; i < n; i++)
    {   
        ans++;
        #ifdef DEBUG
        cout << s[i] << " " << q[i] << ENDL;
        #endif
        if (t.find(s[i]) != t.end())
        {
            set<string>::iterator its = t.find(s[i]);
            t.erase(its);
            #ifdef DEBUG 
            cout << "s[i] tem no set, remove\n"; 
            #endif
        }
        else
        {
            t.insert(s[i]);
            #ifdef DEBUG
            cout << "s[i] n tem no set, adiciona\n";
            #endif
        }
        if (t.find(q[i]) != t.end())
        {
            set<string>::iterator itq = t.find(q[i]);
            t.erase(itq);
            #ifdef DEBUG
            cout << "q[i] tem no set, remove\n";
            #endif
        }
        else
        {
            t.insert(q[i]);
            #ifdef DEBUG
            cout << "q[i] n tem no set, adiciona\n";
            #endif
        }
        if (t.empty())
        {
            cout << ans << " ";
            ans = 0;
        }
        #ifdef DEBUG
        cout << ENDL;
        #endif
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