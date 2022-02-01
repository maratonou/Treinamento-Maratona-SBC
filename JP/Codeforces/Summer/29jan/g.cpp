#include "bits/stdc++.h"

using namespace std;

#define forn(i, n) for (int i = 0; i < n; i++)
 
using ll = long long;
using f64 = double;
using ii = pair<int, int>;
using ull = unsigned long long;
using vi = vector<int>;
using vii = vector<ii>;


const string ENDL = "\n";

class comparator {
public:
    bool operator() (const vi & lhs, const vi &rhs) const
    {
        return (lhs[2]>rhs[2]);
    }
};

class UnionFind {
private: 

public:
    vi p, rank;
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

void solve() {
    int n;
    cin >> n;
    vi altura(n+1, 0);
    forn(i, n)
    {
        int q;
        cin >> q;
        if (q!= -1)
        {
            altura[i+1] = altura[q]+1; 
        }
    }
    sort(altura.begin(), altura.end());
    int ans = 0;
    for(int i = 1; i <= n; i++)
    {
        if (altura[i] != altura[i+1])
            ans++;
        // cout << altura[i] << " ";
    }
    // cout << altura[n] << ENDL;
    cout << ans << ENDL;
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	//cin >> t;
	while(t--) solve();
	return 0;
}