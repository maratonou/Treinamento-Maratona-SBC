#include "bits/stdc++.h"

using namespace std;

#define forn(i, n) for (int i = 0; i < n; i++)
 
using ll = long long;
using ii = pair<int, int>;
using ull = unsigned long long;
using vi = vector<int>;

const string ENDL = "\n";

void solve()
{
	string s;
    cin >> s;

    int n = s.size();
    vi numbers;

    for (int i = 0; i < n; i++)
    {
        if (s[i] != '+')
            numbers.push_back(s[i] - '0');
    }
    sort(numbers.begin(), numbers.end());

    for (int i = 0; i < numbers.size(); i++)
    {
        if (i < numbers.size()-1)
        {
            cout << numbers[i] << '+';
        }
        else
        {
            cout << numbers[i];
            cout << ENDL;
        }
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