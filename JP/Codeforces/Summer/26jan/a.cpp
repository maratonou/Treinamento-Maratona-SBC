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

/*
29 6 10 15
30
7 - 13 - 19 - 25 - 1 - 7 - 13 - 19 - 25 - 1
1 - 11 - 21 - 1
16 - 1 

7 3 4 5
8
1 - 4 - 7 - 2
1 - 5 - 1 - 5 - 1
1 - 6 - 3 - 8 - 5

4*6*10

n+1 = 239



*/
int lcm(int a, int b)
{
    return a*b/(__gcd(a,b));
}

int lcm3(int a, int b, int c)
{
    int maximum = 100000;
    for (int i = max(max(a,b), c); i <= maximum; i++)
    {
        if (i % a == 0 && i % b == 0 && i % c == 0)
            return i;
    }
    return -1;
}
int lcm2(int a, int b)
{
    int maximum = 100000;
    for (int i = max(a,b); i <= maximum; i++)
    {
        if (i % a == 0 && i % b == 0)
            return i;
    }
    return -1;
}

void iteraction(int &x, int &y, int &z, int &dx, int &dy, int &dz, int &n)
{
    x = (dx+x)%(n+1);
    y = (dy+y)%(n+1);
    z = (dz+z)%(n+1);
}

void solve()
{
    int n, vs, vb, vl;
    cin >> n >> vs >> vb >> vl;
    // lcm (a, b) == lcm (a, c) && lcm(b, c) == lcm(a , b)
    int lcmABC = lcm3(vs, vb, vl);
    
    // cout << lcmABC << ENDL;
    if (lcmABC == n+1)
    {
        cout << "3000000000\n";
        return;
    }
    map<int, int> mapa;
    int x, y, z;
    x = y = z = 1;
    int ans = 0;
    int ok = 0;
    while(!ok)
    {
        iteraction(x, y, z, vs, vb, vl, n); 
        if (mapa[x] == 0)
        {
            // cout << "x = " << x << ENDL;
            ans++;
            mapa[x] = 1;
        }
        else if (mapa[x] != 1)
        {
            // cout << "x = " << x << ENDL;
            ans++;
            if (x !=1)
            {
                // cout << "mapa[x] = " << mapa[x] << ENDL;
                ok = 1;
                break;
            }
        } 
        else
        {
            ans++;
        }   
        if (mapa[y] == 0)
        {
            // cout << "y = " << y << ENDL;
            ans++;
            mapa[y] = 2;
        }
        else if (mapa[y] != 2)
        {
            // cout << "y = " << y << ENDL;
            ans++;
            if (y !=1)
            {
                // cout << "mapa[y] = " << mapa[y] << ENDL;
                ok = 1;
                break;
            }
        }
        else
        {
            ans++;
        }
        if (mapa[z] == 0)
        {
            // cout << "z = " << z << ENDL;
            ans++;
            mapa[z] = 3;
        }
        else if (mapa[z] != 3)
        {
            // cout << "z = " << z << ENDL;
            ans++;
            if (z !=1)
            {
                // cout << "mapa[z] = " << mapa[z] << ENDL;
                ok = 1;
                break;
            }
        }
        else
        {
            ans++;
        }
        // cout << ENDL;        
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