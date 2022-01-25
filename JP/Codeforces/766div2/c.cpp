#include "bits/stdc++.h"

using namespace std;

#define forn(i, n) for (int i = 0; i < n; i++)
 
using ll = long long;
using ii = pair<int, int>;
using ull = unsigned long long;
using vi = vector<int>;
using vii = vector<ii>;

const string ENDL = "\n";

const int IMPOSSIBLE = 0;
const int NO_PATH_2 = -1;


int isPathSize2(vector<vii> &graph, int path_id, int sub_path_id)
{
    int new_id = graph[path_id][sub_path_id].first;
    // cout << "          new_id = " << new_id << ENDL;
    // cout << "       new_id number of edges = " << graph[new_id].size() << ENDL;
    if (graph[new_id].size() == 1)
    {
        graph[new_id][0].second = 3;
        return 1;
    }
    return 0;
}
int isPathPossible(vector<vii> &graph, int path_id)
{
    int n_path_size2 = 0;
    int sub_path = 0;
    forn(i, (int)graph[path_id].size())
    {
        int v = graph[path_id][i].first;
        if (v == 1)
            continue;
        // cout << "path_id, sub_path_id = " << path_id << ", " << v << ENDL;
        if (isPathSize2(graph, path_id, i))
        {
            // cout << "entrei\n";
            n_path_size2++;
        }
    }
    // cout << "n_path_size2 = " << n_path_size2 << ENDL;
    if (n_path_size2 > 1)
    {
        return IMPOSSIBLE;
    }
    return 1;


}
void solve()
{
	int n;
    cin >> n;
    vector<vii> graph(n+1);

    vii edges;
    forn(i, n-1)
    {
        int u,v;
        cin >> u >> v;
        edges.push_back(make_pair(u, v));
        graph[u].push_back(make_pair(v, 2));
        graph[v].push_back(make_pair(u, 2));
    }
    forn(i, (int)graph[1].size())
    {
        int v = graph[1][i].first;
        if (graph[v].size() == 1)
        {
            graph[v][0].second = 2;
            graph[1][i].second = 2;
            
        }
        else
        {
            int path_possible = isPathPossible(graph, v);
            if (path_possible == IMPOSSIBLE)
            {
                cout << "-1\n";
                return;
            }
        }
    }
    forn(i, n-1)
    {
        int father = edges[i].first;
        int son = edges[i].second;
        forn(j, (int)graph[father].size())
        {
            if (graph[father][j].first == son)
            {
                cout << graph[father][j].second << " ";
                break;
            }
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