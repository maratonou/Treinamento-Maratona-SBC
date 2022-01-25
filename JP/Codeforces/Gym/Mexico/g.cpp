#include "bits/stdc++.h"

using namespace std;
 
using ll = long long;
using ii = pair<int, int>;
using ull = unsigned long long;
using vi = vector<int>;

const string ENDL = "\n";

void solve()
{
    int n;
    string d;
    cin >> n >> d;
    int gotWhite = 0;
    int first = 5;
    int second = 22;
    for (int i = 0; i < n; i++)
    {
        if (!gotWhite && i > 0)
        {
            string aux;
            getline(cin, aux);
        }
        gotWhite = 0;
        string a,b,c,d;
        getline(cin, a);
        getline(cin, b);
        getline(cin, c);
        getline(cin, d);



        if (d.empty())
        {
            gotWhite = 1;
        }
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