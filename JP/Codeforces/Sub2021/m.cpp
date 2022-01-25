#include "bits/stdc++.h"

using namespace std;
 
const string _endl = "\n";

using ll = long long;
using ii = pair<int, int>;
using ull = unsigned long long;
using vi = vector<int>;

vi vetor;

void creatingPrefix(vector<vi> &tree, vi &bits, int node)
{
    vetor.push_back(node);
    bits[node] = 1;
    for (int i = 0; i < tree[node].size(); i++)
    {
        if (!bits[ tree[node][i] ])
        {
            creatingPrefix(tree, bits, tree[node][i]);
        }
    }
}

void solve()
{
	int n;
    cin >> n;
    int nos = 0;
    vector<ii> query(n);
    for (int i = 0; i < n; i++)
    {
        int t, x;
        cin >> t >> x;
        query[i].first = t;
        query[i].second = x;
        nos += (t == 1)? 1 : 0;
    }
    vector<vi> adj_list(nos+2);
    int next = 2;
    for (int i = 0; i < n; i++)
    {
        // cout << "a\n";
        if (query[i].first == 1)
        {
            adj_list[ query[i].second ].push_back(next);
            adj_list[next].push_back(query[i].second);
            next++;
        }
    }
    vi bits(nos+2, 0);
    
    creatingPrefix(adj_list, bits, 1);
    int size = vetor.size();
    vi morto (size, 0);
    int pai = 1;
    int id = 0;
    map<int, int> mapa;
    for (int i = 0; i < size; i++)
    {
        mapa[vetor[i]] = i;
    }
    for (int i = 0; i < n; i++)
    {
        if (query[i].first == 2)
        {
            morto[mapa[query[i].second]] = 1;
            if (query[i].second == pai)
            {
                morto[id] = 1;
                for (;morto[id] == 1; id++);
                pai = vetor[id];
            }
            cout << pai << "\n";
        }
    }
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	// cin >> t;
	while(t--) solve();
 	return 0;
}