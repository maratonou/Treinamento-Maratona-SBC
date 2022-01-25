#include "bits/stdc++.h"

using namespace std;
 
using ll = long long;
using ii = pair<int, int>;
using ull = unsigned long long;
using vi = vector<int>;

const string ENDL = "\n";

void solve()
{
	string s;
    cin >> s;
    int ok = 0;
    if (atoi(&s[s.size()-1]) % 2 == 0)
    {
        ok = 1;
        cout << "2 ";
    }
    int sum = 0;
    int n = s.size();
    for (int i = 0; i < n; i++)
    {

    }
    if (sum % 3 == 0)
    {
        cout << "2 ";
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