#include "bits/stdc++.h"
 
using namespace std;
 
using ll = long long;
using ii = pair<int, int>;
using ull = unsigned long long;
using vi = vector<int>;
 

class comparator {
public:
    bool operator() (const vi & lhs, const vi &rhs) const
    {
        return (lhs[2]>rhs[2]);
    }
};

class UnionFind {
private: vi p, rank;

public:
    UnionFind(int n) {
        this->rank.assign(n, 0);
        this->p.assign(n, 0);
        for (int i = 0; i < n; i++)
        {
            p[i] = i;
        }
    }
    int findSet(int i)
    {
        return (p[i] != i ? (p[i] = findSet(p[i])) : i);
    }
    void unionSet(int i, int j)
    {
        int x = findSet(i), y = findSet(j);
        if ( rank[x] > rank[y] )
        {
            p[y] = x;
        }
        else
        {
            p[x] = y;
            if (rank[x] == rank[y]) rank[y]++;
        }
    }
    int isSameSet(int i, int j)
    {
        return findSet(i) == findSet(j);
    }
    void printSet()
    {
        for (int i = 0; i < (int)p.size(); i++)
        {
            cout << p[i] << " ";
        }
        cout << "\n";
    }
};

void solve()
{
    int m, n;
    while (true)
    {
        cin >> n >> m;
        if (n == 0 && m == 0)
            return;

        vector<vi> arestas(m);
        vi bits(n, 0);
        for (int i = 0; i < n; i++)
        {
            bits[i] = i;
        }
        int total_cost = 0;
        for (int i = 0; i < m; i++)
        {
            arestas[i].resize(3);
            cin >> arestas[i][0] >> arestas[i][1] >> arestas[i][2];
            total_cost += arestas[i][2];
        }
        UnionFind *sets = new UnionFind(n);
        priority_queue<vi, vector<vi>, comparator> ordered_edges(arestas.begin(), arestas.end());
        int cost = 0;
        for (int k = 0; k < m; k++)
        {
            vi edge = ordered_edges.top();
            ordered_edges.pop();
            if (!sets->isSameSet(edge[0], edge[1]))
            {
                sets->unionSet(edge[0], edge[1]);
                cost += edge[2];
                // printf(" edge %d %d %d\n", edge[0], edge[1], edge[2]);
                // sets->printSet();
            }
        }
        cout << total_cost - cost << "\n";
    }
}
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
    solve();
    return 0;
}