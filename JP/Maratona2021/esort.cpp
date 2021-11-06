#include "bits/stdc++.h"

using namespace std;
 
using ll = long long;
using ii = pair<int, int>;
using ull = unsigned long long;
using vi = vector<int>;

int comparator(ii a, ii b)
{
    return a.first < b.first;
}

void solve()
{
    int N;
    cin >> N;
    vector<ii> pares;
    for (int i = 0; i < N; i++)
    {
        int x, y;
        cin >> x >> y;
        ii par(x,y);
        pares.push_back(par);
        // cout << par.first << " " << par.second << "\n";
    }
    int atual_first = 0;
    int ladoAtual = pares[0].second;
    int T = 0;
    vi contagem(N, 0);
    while (true)
    {
        int full = 1;
        for (int i = 0; i < N; i++)
        {
            if(!contagem[i])
            {    if (pares[i].first < T)
                {
                    if (pares[i].second == ladoAtual)
                    {
                        T = pares[i].first+10;
                        contagem[i] = 1;
                    }
                    else
                    {
                        pares[i].first = T;
                    }
                }
            }
            else
            {
                ladoAtual = pares[i].second;
            }
        }
    }
    cout << T << "\n";
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	// cin >> t;
	while(t--) solve();
 	return 0;
}