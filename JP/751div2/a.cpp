#include "bits/stdc++.h"

using namespace std;
 
using ll = long long;
using ii = pair<int, int>;
using ull = unsigned long long;
using vi = vector<int>;

void solve()
{
    cin.ignore();
    string s;
    cin >> s;
    
    vi mapa (26, 0);
    for (int i = 0; i < (int)s.size(); i++)
    {
        if (!mapa[ s[i] - 'a' ])
            mapa[ s[i] - 'a' ] = i;
    }
    int counter;
    for (counter = 0; counter < 26 && mapa[counter] == 0; counter++);
    int menor = mapa[counter];

    // cout << counter << "\n";

    cout << s[menor] << " ";

    for (int i = 0; i < s.size(); i++)
    {
        if (menor != i)
        {
            cout << s[i];
        }
    }
    cout << "\n";  
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) solve();
 	return 0;
}