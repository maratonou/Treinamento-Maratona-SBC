#include "bits/stdc++.h"

using namespace std;
 
using ll = long long;
using ii = pair<int, int>;
using ull = unsigned long long;

void solve()
{
    string s;
    cin >> s;
    map<char, int> cnt;
    int size = s.size();
    for (int i = 0; i < size; i++)
    {
        cnt[s[i]]++;
    }
    if ( (cnt['A'] + cnt['C']) == cnt['B'] )
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
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