#include "bits/stdc++.h"

using namespace std;

#define forn(i, n) for (int i = 0; i < n; i++)
 
using ll = long long;
using f64 = double;
using ii = pair<int, int>;
using ull = unsigned long long;
using vi = vector<int>;
using vii = vector<ii>;
using ugraph = vector<vi>;
using dgraph = vector<vii>;

#define size(x) x.size()

ifstream hello("hello.in");

const string ENDL = "\n";

void solve()
{
	int problems[20];
    int n = 12;

    for(int i = 0; i < n; i++)
    {
        hello >> problems[i];
    }
    int ok = 1;
    for(int i = 0; i < 3; i++)
    {
        // cout << problems[i] << " " << problems[i+1] << ENDL;
        if (problems[i] >= problems[i+1])
        {
            ok = 0;
            cout << "no\n";
            break;
        }
    }
    int maior = problems[3];
    for(int i = 4; i < 12; i++)
    {
        // cout << problems[3] << " " << problems[i] << ENDL;
        if (maior >= problems[i] && ok)
        {
            ok = 0;
            cout << "no\n";
            break;
        }
    }
    if (ok)
        cout << "yes\n";

}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	hello >> t;
	while(t--) solve();
    hello.close();
 	return 0;
}