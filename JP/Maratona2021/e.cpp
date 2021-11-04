#include "bits/stdc++.h"

using namespace std;
 
using ll = long long;
using ii = pair<int, int>;
using ull = unsigned long long;
using vi = vector<int>;


int compare(ii a, ii b)
{
    return a.first < b.first;
}


class comparator {
public:
    bool operator() (const ii & lhs, const ii &rhs) const
    {
        return (lhs.first>rhs.first);
    }
};

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
    priority_queue<ii, vector<ii>, comparator> pq_pares(pares.begin(), pares.end());
    // cout << pq_pares.top().first << "\n";
    int atual_first = 0;
    int ladoAtual = pares[0].second;
    int T = 0;
    while (!pq_pares.empty())
    {
        if (pq_pares.top().first < T)
        {
            if (ladoAtual == pq_pares.top().second)
            {
                T = pq_pares.top().first+10;
                pq_pares.pop();
            }
            else
            {
                ii par = pq_pares.top();
                par.first = T;
                pq_pares.pop();
                pq_pares.emplace(par);
            }
        }
        else
        {
            T = pq_pares.top().first + 10;
            ladoAtual = pq_pares.top().second;
            pq_pares.pop();
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