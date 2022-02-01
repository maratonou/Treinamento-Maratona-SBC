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
    // cout << "a\n";
    int freq[2000] = {0};
	int v; cin >> v;
    forn(i, v)
    {
        int n; cin >> n;
        freq[n]++;
    }
    int maior = 0;
    int maior_i = -1;
    for (int i = 1; i <= 1000; i++)
    {
        if (maior < freq[i])
        {
            maior = freq[i];
            maior_i = i;
        }
    }
    cout << maior_i << ENDL;
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) solve();
 	return 0;
}