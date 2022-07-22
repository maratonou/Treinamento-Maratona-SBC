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

void solve()
{
	int n; cin >> n;
    vi h(n, 0); forn(i, n) cin >> h[i];
    sort(h.rbegin(), h.rend());
    int day = 1;
    for(int i = 1; i < n; i++)
    {
        if (h[i] < h[i-1])
        {
            int dif = abs(h[i]-h[i-1]);
            if(dif%3 == 1)
            {
                if (day %2 == 0)
                {
                    day += 1;
                }
                day+= ((dif/3)*2)+1;
                cout << "day(mod 3 == 1) " << day << " somou " << ((dif/3)*2)+1 << ENDL;
            }
            else
            {
                if(dif % 3 == 2)
                {
                    if (day %2 == 1)
                    {
                        day += 1;
                    }
                    day+= ((dif/3)*2)+1;
                    cout << "day(mod 3 == 2) " << day << " somou " << ((dif/3)*2)+1 << ENDL;
                }
                else
                {
                    day += (dif/3)*2;
                    cout << "day(mod 3 == 0) " << day << " somou " << ((dif/3)*2) << ENDL;
                }
            }
            cout << "day = " << day << " ....h[i] = " << h[i] << " ....h[i-1] = " << h[i-1] << ENDL;
            h[i] = h[i-1];
        }
    }
    cout << day << ENDL;
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) solve();
 	return 0;
}