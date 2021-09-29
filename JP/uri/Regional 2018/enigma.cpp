#include "bits/stdc++.h"
 
using namespace std;
 
using ll = long long;
using ii = pair<int, int>;
using ull = unsigned long long;
 

int cribPossible(string s, string crib, int offset)
{
    for (int i = 0; i < crib.size(); i++)
    {
        if (crib[i] == s[i+offset])
        {
            return 0;
        }
    }
    return 1;
}

void solve()
{
    string s;
    string crib;
    // cin.ignore();
    cin >> s >> crib;
    int max_offset = s.size() - crib.size();
    int total = 0;
    for (int i = 0; i <= max_offset; i++)
    {
        total += cribPossible(s, crib, i);
    }
    cout << total << "\n";
}
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
    solve();
    return 0;
}