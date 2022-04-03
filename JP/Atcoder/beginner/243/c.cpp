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

int compare(pair<int, char> &a, pair<int, char> &b)
{
    return a.first < b.first;
}

void solve()
{
	int n; cin >> n;
    vector<vi> p(n);
    map<int, vector< pair<int,char> > > mapa;
    forn(i, n){
        p[i].resize(2, 0);
        cin >> p[i][0] >> p[i][1];
    }
    cin.ignore();
    string s; cin >> s;
    for(int i = 0; i < n; i++)
    {
        mapa[p[i][1]].push_back(make_pair(p[i][0], s[i]));
    }
    for(auto m: mapa)
    {
        sort(m.second.begin(), m.second.end(), &compare);
        int mode = 0;
        for(auto e: m.second)
        {
            if (mode == 0)
            {
                if (e.second == 'R')
                    mode = 1;
            }
            else
            {
                if(e.second == 'L')
                {
                    cout << "Yes\n";
                    return;
                }
            }
        }
    }
    cout << "No\n";
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	// cin >> t;
	while(t--) solve();
 	return 0;
}