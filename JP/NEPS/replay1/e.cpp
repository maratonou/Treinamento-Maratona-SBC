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

int n, m;

int moves[4][2] = {
    {0,-1},
    {0, 1},
    {-1, 0},
    {1, 0}
};

int isPossible(vector<string> mapa, int k, vector<vi> &p)
{
    int x = -1, y = -1;
    queue<ii> q;
    forn(i, n) {
        forn(j, m) {
            if (mapa[i][j] == 'S')
            {
                x = i; y = j;
                break;
            }
        }
        if (x > -1 && y > -1)
            break;
    }
    q.push(make_pair(x, y));
    while (!q.empty())
    {
        auto [x, y] = q.front();
        q.pop();
        mapa[x][y] = '#';
        forn(i, n) cout << mapa[i] << ENDL;
        cout << "queue size: " << q.size() << ENDL;
        cout << ENDL;
        for(int i = 0; i < 4; i++)
        {   
            int xi = x+moves[i][0], yi = y+moves[i][1];
            ii v1(max(0, x-k), max(0, y-k));
            ii v2();
            ii v3();
            ii v4();
            if (xi < 0 || xi >= n || yi < 0 || yi >= m) continue;
            if (mapa[ xi ][ yi ] == '.')
                q.push(make_pair(xi, yi));
            if (mapa[ xi ][ yi ] == 'E')
            {
                cout << "cheguei\n";
                return 1;
            }
        }
    }
    return 0;
}

void solve()
{
	cin>> n >> m;
    cin.ignore();
    vector<string> mapa(n); forn(i, n) cin >> mapa[i];
    vector<vi> p(n); forn(i, n) p[i].resize(m, 0);
    vector<vi> a(n); forn(i, n) a[i].resize(m, 0);

    forn(i, n)
        forn(j, m)
            if (mapa[i][j] == '*')
                a[i][j] = 1;
    
    p[0][0] = a[0][0];
    for(int i = 1; i < n; i++) p[i][0] = p[i-1][0] + a[i][0]; 
    for(int i = 1; i < m; i++) p[0][i] = p[0][i-1] + a[0][i];

    for(int i = 1; i < n; i++)
        for(int j = 1; j < m; j++)
            p[i][j] += p[i-1][j] + p[i][j-1] - p[i-1][j-1] + a[i][j];


    forn(i, n)
    {
        forn(j, m) cout << p[i][j] << " ";
        cout << ENDL;
    }
    int hi = n+m;
    int lo = 1;
    int mid = (hi+lo)/2;
    int chegou = 0;
    while (lo < hi-1)
    {
        cout << mid << ENDL;
        cout << lo << " " << hi << ENDL;
        if (isPossible(mapa, mid, p))
        {
            chegou = 1;
            lo = mid;
            mid = (hi+lo)/2;
        }
        else
        {
            hi = mid;
            mid = (hi+lo)/2;
        }
    }
    cout << (chegou ? mid : -1) << ENDL;
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	// cin >> t;
	while(t--) solve();
 	return 0;
}