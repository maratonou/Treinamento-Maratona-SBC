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

const int INF = 1e9;
const int N = 1e3 + 100;
int p[N][N], fire[N][N];

void printMap(vector<string> &mapa)
{
    for (int i = 0; i < (int)mapa.size(); i++)
    {
        cout << mapa[i] << ENDL;
    }
}

void printPlayer(int h, int w)
{
    forn(i, h)
    {
        forn(j, w)
        {
            if (p[i][j] == -1)
            {
                cout << "y ";
                continue;
            }
            cout << p[i][j] << " ";
        }
        cout << ENDL;
    }
}
void printFire(int h, int w)
{
    forn(i, h)
    {
        forn(j, w)
        {
            if (fire[i][j] == INF)
            {
                cout << "x ";
                continue;
            }
            cout << fire[i][j] << " ";
        }
        cout << ENDL;
    }
}

void solve()
{
    int w, h;
    cin >> w >> h;
    vector<string> mapa(h);
    vector<ii> delta = {
        {0, -1},
        {0, 1},
        {-1, 0},
        {1, 0}
        };
    for (string &s : mapa) cin >> s;
    #ifdef DEBUG
    printMap(mapa);
    #endif
    queue<ii> q;

    // fires
    for (int i = 0; i < h; i++)
    {
        for(int j = 0; j < w; j++)
        {
            fire[i][j] = INF;
            if (mapa[i][j] == '*')
            {
                fire[i][j] = 0;
                q.emplace(i, j);
            }
        }
    }
    
    while (!q.empty())
    {
        ii f = q.front();
        q.pop();
        int i = f.first, j = f.second; 
        #ifdef DEBUG
        cout << "--------------------------------------------------------------\nFIRES:\n"; 
        cout << "DELTA INIT:\n";
        #endif
        for (auto &e: delta)
        {
            int x, y;
            x = i + e.first; y = j + e.second;
            if (x < 0 || y < 0 || x >= h || y >= w || fire[x][y] != INF || mapa[x][y] == '#') continue;
            #ifdef DEBUG 
            cout << "h, w = " << h << ", " << w << ENDL; 
            cout << "i, j = " << i << ", " << j << ENDL;
            cout << "x, y = " << x << ", " << y << ENDL;
            cout << ENDL;
            #endif
            q.emplace(x, y);
            fire[x][y] = 1+fire[i][j];
        }
    }

    // player
    for (int i = 0; i < h; i++)
    {
        for(int j = 0; j < w; j++)
        {
            p[i][j] = -1;
            if (mapa[i][j] == '@')
            {
                p[i][j] = 0;
                q.emplace(i, j);
            }
        }
    }
    while (!q.empty())
    {
        ii f = q.front();
        q.pop();
        int i = f.first, j = f.second; 
        #ifdef DEBUG
        cout << "--------------------------------------------------------------\nPLAYER:\n"; 
        cout << "DELTA INIT:\n";
        #endif
        for (auto &e: delta)
        {
            int x, y;
            x = i + e.first; y = j + e.second;
            if (x < 0 || y < 0 || x >= h || y >= w || p[x][y] != -1 || mapa[x][y] != '.' || fire[x][y] <= 1+p[i][j]) continue;
            #ifdef DEBUG
            
            cout << "h, w = " << h << ", " << w << ENDL; 
            cout << "i, j = " << i << ", " << j << ENDL;
            cout << "x, y = " << x << ", " << y << ENDL;
            cout << ENDL;
            #endif
            
            q.emplace(x, y);
            p[x][y] = 1+p[i][j];
        }
    }

    int ans = INF;
    #ifdef PRINT_MAP
    printFire(h, w);
    cout << ENDL;
    printPlayer(h, w);
    #endif
    forn(i, h)
    {
        if (p[i][0] != -1)
        {
            ans = min(ans, p[i][0]);
        }
        if (p[i][w-1] != -1)
        {
            ans = min(ans, p[i][w-1]);
        }
    }
    forn(i, w)
    {
        if (p[0][i] != -1)
        {
            ans = min(ans, p[0][i]);
        }
        if (p[h-1][i] != -1)
        {
            ans = min(ans, p[h-1][i]);
        }
    }
    if (ans == INF)
        cout << "IMPOSSIBLE\n";
    else
        cout << ans+1 << ENDL;
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) solve();
 	return 0;
}