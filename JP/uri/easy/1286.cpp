#include "bits/stdc++.h"

using namespace std;

#define forn(i, n) for(int i = 0; i < n; i++)
 
using ll = long long;
using ii = pair<int, int>;
using ull = unsigned long long;
using vi = vector<int>;

int comp(ii &a, ii &b)
{
	return a.first > b.first;
}

void solve()
{
	int n, p;
	int time = 0;
	cin >> n;
	if (!n) return;
	cin >> p;
	vector<ii> a(n); forn(i, n) cin >> a[i].first >> a[i].second;
	int hi = a[0].first;
	time = a[0].first;
	int l, r;
	l = r = 0;
	p-= a[0].second;
	sort(a.begin(), a.end(), &comp);
	forn(i, n) cout << a[i].first << " " << a[i].second << "\n";
	while(r < n)
	{
		if(p < 0)
		{
			p+=a[l].second;
			time-=a[l].first;
			l++;
		}
		time+=a[r].first;
		p -=a[r].second;
		hi = max(hi, time);
		cout << "escolheu " << l << " " << r << "\n";
		r++;
	}
	cout << hi << " min.\n";
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	// cin >> t;
	while(!cin.eof()) solve();
 	return 0;
}