#include "bits/stdc++.h"

using namespace std;

#define forn(i, n) for (int i = 0; i < n; i++)
 
using ll = long long;
using f64 = double;
using ii = pair<int, int>;
using ull = unsigned long long;
using vi = vector<int>;
using vii = vector<ii>;

#define size(x) x.size()

#define left(x) (((x)<<1)+1)
#define right(x) (((x)<<1)+2)
#define pai(x) (((x-1))>>1)

const string ENDL = "\n";

ll heap[600200];
string str;

ll startHeap(int root, string &str, int &k)
{
    if (root >= (1<<k)-1)
        return 1;

    ll l = startHeap(left(root), str, k);
    ll r = startHeap(right(root), str, k);

    if (str[root] == '?')
        heap[root] = l+r;
    else if (str[root] == '1')
        heap[root] = l;
    else
        heap[root] = r;
    
    return heap[root];
}

void updateHeap(int root, string &str)
{
    ll l = max(1LL, heap[left(root)]);
    ll r = max(1LL, heap[right(root)]);
 
    if (str[root] == '?')
        heap[root] = l+r;
    else if (str[root] == '1')
        heap[root] = l;
    else
        heap[root] = r;
    
    if (root > 0 ) updateHeap(pai(root), str);
}

void solve()
{
	int k;
    cin >> k;
    cin >> str;
    reverse(str.begin(), str.end());
    int q;
    cin >> q;
    int bgn = 0;
    startHeap(bgn, str, k);
    forn(i, q)
    {
        int n;
        char c;
        cin >> n;
        cin >> c;
        n = size(str)-n;
        str[n] = c;
        updateHeap(n, str);
        cout << heap[0] << ENDL;
    }
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	// cin >> t;
	while(t--) solve();
 	return 0;
}