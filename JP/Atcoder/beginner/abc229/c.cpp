#include "bits/stdc++.h"

using namespace std;

#define forn(i, n) for (int i = 0; i < n; i++)

using ll = long long;
using ii = pair<int, int>;
using ull = unsigned long long;
using vi = vector<int>;
using ll_ll = pair<ll, ll>;

int comparator(ll_ll &a, ll_ll &b)
{
    return a.first >= b.first;
}

void solve()
{
    ll n;
    ll w;
    cin >> n >> w;
    vector<ll_ll> v(n);

    forn(i, n)
    {
        cin >> v[i].first >> v[i].second;
    }

    priority_queue<ll_ll> pq (v.begin(), v.end());
    ull ans = 0;

    while (w > 0 && !pq.empty())
    {
        ll_ll top = pq.top();
        pq.pop();
        ans += top.first * min(w, top.second);
        w -= min(w, top.second);
    }
    cout << ans << "\n";
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	// cin >> t;
	while(t--) solve();
 	return 0;
}