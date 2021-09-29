#include "bits/stdc++.h"

using namespace std;

using ll = long long;
using ii = pair<int, int>;
using ull = unsigned long long;


vector<int> move(vector<int> a)
{
    int n = a.size();
    vector<int> dist(n, 0);
    for (int i = 0; i < n; i++)
    {
        // cout << "a4\n" << new_a.size() << " " << op << "\n";
        dist[i] = (i+1) - a[i];
        if (dist[i] < 0)
        {
            a.erase(a.begin()+i);
            return move(a, )
        }
    }
}

void solve() {
    // cout << "a1\n";
    int n, k;
    cin >> n >> k;
    vector<int> a(n, 0);
    for (int i = 0; i < n; i++)
    {
        int number;
        cin >> number;
        a[i] = number;
        // cout << "a2\n";
    }
    vector<int> b = move(a);
    int ans;
    if (b.size() < k)
    {
        cout << "-1\n";
    }
    else
    {
        cout << a.size() - b.size() << "\n";
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