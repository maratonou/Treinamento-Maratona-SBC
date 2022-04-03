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

#define sz(x) x.size()

const string ENDL = "\n";

int compare( ll &a, ll&b)
{
    return a > b;
}

void solve()
{
	ll n, m; cin >> n >> m;
    ll ans;
    vector<ll> balls(n);
    forn(i, n) cin>> balls[i];
    vector<string> mapa(n);
    forn(i, n) cin >> mapa[i];
    vector<ll> buckets(n);
    map<ll, int> marcador;
    forn(i, m) 
    {
        cin >> buckets[i]; 
        marcador[ buckets[i] ] = i;
    }
    sort(buckets.begin(), buckets.end(), &compare);
    forn (i, (int)sz(buckets))
    {
        int ind = marcador[ buckets[i]] ;
    }
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) solve();
 	return 0;
}