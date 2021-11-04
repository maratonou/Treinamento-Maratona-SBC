#include "bits/stdc++.h"

using namespace std;
 
using ll = long long;
using ii = pair<int, int>;
using ull = unsigned long long;
using vi = vector<int>;

void solve()
{
    string s;
    string word;
    cin >> s >> word;

    map<char, int> order;
    for (int i = 1; i <= 26; i++)
    {
        order[s[i-1]] = i; 
    }
    
    int time = 0;
    for (int i = 1; i < (int)word.size(); i++)
    {
        time += abs(order[word[i]] - order[word[i-1]]);
    }
    cout << time << "\n";
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) solve();
 	return 0;
}