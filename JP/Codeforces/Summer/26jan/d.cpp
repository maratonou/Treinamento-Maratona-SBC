#include "bits/stdc++.h"

using namespace std;

#define forn(i, n) for (int i = 0; i < n; i++)
 
using ll = long long;
using f64 = double;
using ii = pair<int, int>;
using ull = unsigned long long;
using vi = vector<int>;
using vii = vector<ii>;
using dd = pair<f64, f64>;

const string ENDL = "\n";

f64 distFromOrigin(dd &origin, dd &point)
{
    f64 dx = origin.first-point.first;
    f64 dy = origin.second-point.second;
    
    return sqrt(((dx*dx)+(dy*dy)));
}

dd vetorDir(dd &point, dd &origin)
{
    f64 dx = origin.first-point.first;
    f64 dy = origin.second-point.second;
    dd a = make_pair(dx/distFromOrigin(point, origin), dy/distFromOrigin(point, origin));
    // cout << "ORIGIN " << origin.first << ", " << origin.second << ENDL;
    // cout << "POINT "<< point.first << ", " << point.second << ENDL;
    // cout << "DIST FROM ORIGIN " << distFromOrigin(point, origin) << ENDL;
    // cout << "VETOR DIR "<< a.first << ", " << a.second << ENDL;
    // cout << ENDL;
    return a;
}

void solve()
{
	set<dd> flagDist;
    int x0, y0;
    int R, N;
    cin >> x0 >> y0 >> R >> N;
    dd origin = make_pair(x0, y0);
    vector<dd> points;
    forn(i, N)
    {
        int x, y;
        cin >> x >> y;
        points.push_back(make_pair(x, y));
    }
    int ans = 0;
    forn(i, N)
    {
        // cout <<  distFromOrigin(points[i]) << ENDL;
        // cout << "-> " << flagDist[ distFromOrigin(points[i]) ] << ENDL;
        if (distFromOrigin(points[i], origin) <= R)
        {
            dd vetorDirecao = vetorDir(points[i], origin);
            // cout << vetorDirecao.first << ", " << vetorDirecao.second << ENDL;
            if (flagDist.find( vetorDir(points[i], origin) ) == flagDist.end())
            {
                // cout << "-->entrei\n";
                flagDist.insert( vetorDir(points[i], origin) );
                ans++;
            }
        }
    }
    cout << ans << ENDL; 
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	// cin >> t;
	while(t--) solve();
 	return 0;
}