#include "bits/stdc++.h"

using namespace std;
 
using ll = long long;
using ii = pair<int, int>;
using ull = unsigned long long;
using vi = vector<int>;

void solve()
{
    int n;
    cin >> n;
    deque<int> a;
    for (int i = 0; i < n; i++)
    {
        int aux;
        cin >> aux;
        a.push_back(aux);
    }
    if (n == 1)
    {
        cout << a[0] << "\n";
        return;
    }
    sort(a.begin(), a.end());
    int maior_geral = a[0];
    int menor_acum = 0;
    while(!a.empty())
    {
        int menor = a[0];
        menor_acum += menor;
        maior_geral = max(menor, maior_geral);
        a.pop_front();
        a[0] -= menor_acum;
        // cout << menor_acum << "\n";
    }
    cout << maior_geral << "\n";
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) solve();
 	return 0;
}