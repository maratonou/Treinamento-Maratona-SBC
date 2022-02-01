#include "bits/stdc++.h"

using namespace std;

#define forn(i, n) for (int i = 0; i < n; i++)
 
using ll = long long;
using f64 = double;
using ii = pair<int, int>;
using dd = pair<double, double>;
using ull = unsigned long long;
using vi = vector<int>;
using vii = vector<ii>;
using ugraph = vector<vi>;
using dgraph = vector<vii>;

#define size(x) x.size()
#define DEBUG

const string ENDL = "\n";

#define cin(n) cin >> n

int compareW(dd&a, dd&b)
{
    return (a.first < b.first);
}
int compareC(dd&a, dd&b)
{
    return (a.second > b.second);
}

int compare(dd& a, dd&b)
{
    return compareW(a, b) && compareC(a, b);
}

void solve()
{
	int n; cin(n);
    vector<dd> diamonds;
    vector<dd> copy;

    forn(i, n)
    {
        f64 w, c;
        cin >> w >> c;
        diamonds.emplace_back(w, c);
        copy.emplace_back(w, c);
    }
    sort(diamonds.begin(), diamonds.end(), &compareW);
    sort(copy.begin(), copy.end(), &compareC);
    #ifdef DEBUG
    forn(i, (int)size(diamonds)) 
        printf("%lf %lf\n", diamonds[i].first, diamonds[i].second);
    printf("\n");
    #endif
    int maior_seq = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     int cur = 0;
    //     int status = 0;
    //     dd cur_diamond = diamonds[i];
    //     for (int j = 0; j < n; j++)
    //     {
    //         if (status == 0)
    //         {
    //             if (cur_diamond.first == copy[j].first && cur_diamond.second == copy[j].second)
    //                 status = 1;
    //         }
    //         else
    //         {
    //             if ()
    //         }
    //     }
    // }
    cout << maior_seq << ENDL;
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) solve();
 	return 0;
}