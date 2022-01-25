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
	cin >> n;
	vi vetor(n, 0);
    for (int i = n-1; i >=0; i--)
    {
        cin >> vetor[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << vetor[i] << " ";
    }
    cout << ENDL;
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	// cin >> t;
	while(t--) solve();
 	return 0;
}