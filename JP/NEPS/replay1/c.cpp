#include "bits/stdc++.h"

using namespace std;

#define forn(i, n) for (int i = 0; i < n; i++)
 
using ll = long long;
using f64 = double;
using ii = pair<int, int>;
using ull = unsigned long long;
using vi = vector<int>;
using vii = vector<ii>;

// #define DEBUG
const string ENDL = "\n";

int sort_algoritm(vector<ii> &trocas, vi &a, int &sizeA, int &n)
{
    int change = 0;
    for(int i = 0; i < sizeA; i++)
    {
        int menor = a[i];
        int pos = -1;
        // cout << "i = " << i << ENDL;
        for(int j = i+1; j < sizeA; j++)
        {
            int qtd = 0;
            if (a[j] < menor)
            {
                for(int k = 0; k < n; k++)
                {
                    int shift = 1 << k;
                    // cout << "qtd k a[j] = " << qtd << " " << k << " " << a[j] << ENDL;
                    if ((a[j] & shift) != (a[i] & shift) )
                        qtd++;
                }
                if (qtd == 1) // muda
                {
                    menor = a[j];
                    pos = j;   
                }
            }
        }
        // cout << "menor a[i] = " << menor << " " << a[i] << ENDL;
        if (menor != a[i])
        {
            int tmp = a[i];
            a[i] = a[pos];
            a[pos] = tmp;
            change = 1;
            trocas.push_back(make_pair(i, pos));
        }
        // cout << ENDL;
    }
    return change;
}

void solve()
{
	int n; cin >> n;
    int sizeA = pow(2, n);
    vi a(sizeA); forn(i, sizeA) cin >> a[i];
    int troca = 1;
    vector<ii> trocas;
    while(troca == 1)
    {
        troca = sort_algoritm(trocas, a, sizeA, n); 
    }
    cout << trocas.size() << ENDL;
    forn(i, (int)trocas.size()) cout << trocas[i].first << " " << trocas[i].second << ENDL;
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	// cin >> t;
	while(t--) solve();
 	return 0;
}