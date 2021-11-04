#include "bits/stdc++.h"

using namespace std;
 
using ll = long long;
using ii = pair<int, int>;
using ull = unsigned long long;
using vi = vector<int>;

void solve()
{
    int n;
    ll T = 0;
    cin >> n;
    queue<ii> frente;
    queue<ii> tras;
    int ladoFrente = -1;
    for (int i = 0; i < n; i++)
    {
        int ti, di;
        cin >> ti >> di;
        if (!di)
        {
            frente.push(make_pair(ti,di));
        }
        else
        {
            tras.push(make_pair(ti, di));
        }
       
    }
    int tempo = 0;
    while ( (frente.size() + tras.size()) )
    {

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