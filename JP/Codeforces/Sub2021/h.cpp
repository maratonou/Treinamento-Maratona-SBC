#include "bits/stdc++.h"

using namespace std;
 
const string _endl = "\n";

using ll = long long;
using ii = pair<int, int>;
using ull = unsigned long long;
using vi = vector<int>;

int comparator(ii &a, ii &b)
{
    return a.first < b.first;
}

void solve()
{
	int n, k;
    cin >> n >> k;
    if (n == 1)
    {
        cout << "Y\n";
        return;
    }
    vector<ii> pares;
    map<int, int> cores;
    for (int i = 0; i < n; i++)
    {
        int l, r;
        cin >> l >> r;
        pares.push_back(make_pair(l, r));
        cores[i] = r;
    }
    sort(pares.begin(), pares.end(), &comparator);
    for (int i = 0; i < n; i++)
    {
        if (pares[i].second != cores[i])
        {
            cout << "N\n";
            return;
        }
    }
    cout << "Y\n";
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	// cin >> t;
	while(t--) solve();
 	return 0;
}