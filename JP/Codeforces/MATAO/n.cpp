#include "bits/stdc++.h"

using namespace std;

#define forn(i, n) for (int i = 0; i < n; i++)
 
using ll = long long;
using ii = pair<int, int>;
using ull = unsigned long long;
using vi = vector<int>;

const string ENDL = "\n";

int compareItems(vi &item1, vi &item2)
{
    return item1[1] > item2[1];
}

int comparePPL(vi &ppl1, vi &ppl2)
{
    return ppl1[0] > ppl2[0];
}

void solve()
{
    int n, k, l;
    cin >> n >> k >> l;
    
    vector<vi> pessoas(n);

    forn(i, n)
    {
        int c, p;
        cin >> c >> p;
        pessoas[i].push_back(c);
        pessoas[i].push_back(p);
    }
    vector<vi> items(k);
    forn(i, k)
    {
        int p, v;
        cin >> p >> v;
        items[i].push_back(p);
        items[i].push_back(v);
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