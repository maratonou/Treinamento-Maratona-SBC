#include "bits/stdc++.h"

using namespace std;

const string _endl = "\n"; 

using ll = long long;
using ii = pair<int, int>;
using ull = unsigned long long;
using vi = vector<int>;


void solve()
{
	int n, k;
    cin >> n >> k;

    vi ratos(k, 0);
    int salvos = 0;

    for (int i = 0; i < k; i++)
    {
        cin >> ratos[i];
    }
    sort(ratos.begin(), ratos.end());

    int gato = 0;

    for (int i = k-1; i >= 0 && gato < ratos[i]; i--)
    {
        gato += n-ratos[i];
        salvos++;
    }

    cout << salvos << "\n";
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	cin >> t;   
	while(t--) solve();
 	return 0;
}