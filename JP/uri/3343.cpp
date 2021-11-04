#include "bits/stdc++.h"

using namespace std;
 
using ll = long long;
using ii = pair<int, int>;
using ull = unsigned long long;
using vi = vector<int>;

const int N = 3e5 + 5;

queue<int> l[3];
vi tam(3, 0);
int a[N];



void solve()
{
    int n, x;
    cin >> n >> x;
    string s;
    cin >> s;

    for (int i = 0; i < 3; i++)
    {
        cin >> tam[i];
    }

    for (int i = 0; i < (int)s.size(); i++)
    {
        if (s[i] == 'P')
        {
            a[i] = tam[0];
        }
        else if (s[i] == 'M')
        {
            a[i] = tam[1];
        }
        else
        {
            a[i] = tam[2];
        }
    }
    int paredes = 0;

    for (int i = 0; i < (int)s.size(); i++)
    {
        for (int j = 0; j <= 3; j++)
        {
            if (j == 3)
            {
                paredes++;
                l[2].push(x);
                j--;
            }
            if (!l[j].empty() && l[j].front() >= a[i])
            {
                l[j].front() -= a[i];
                for (int k = 2; k >= 0; k--)
                {
                    while(!l[k].empty() && l[k].front() < tam[k])
                    {
                        if(k)
                        {
                            l[k-1].push(l[k].front());
                        }
                        l[k].pop();
                    }
                }
                break;
            }
        }
    }
    cout << paredes << "\n";
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	// cin >> t;
	while(t--) solve();
 	return 0;
}