#include "bits/stdc++.h"

using namespace std;

#define forn(i, n) for (int i = 0; i < n; i++)
 
using ll = long long;
using ii = pair<int, int>;
using ull = unsigned long long;
using vi = vector<int>;

const string ENDL = "\n";

void solve()
{
	int n;
	cin >> n;

	deque<int> v(n, 0);
	deque<int> ans;
	forn(i, n)
	{
		cin >> v[i];
	}
	if (v[0] != n && v[n-1] != n)
	{
		cout << "-1\n";
		return;
	}
	if (v[0] == n)
	{
		int a = v.front();
		v.pop_front();
		ans.push_front(a);
	}
	else
	{
		int a = v.back();
		v.pop_back();
		ans.push_front(a);
	}
	while (!v.empty())
	{
		int a = v.front();
		v.pop_front();
		ans.push_front(a);
	}
	for (int i = 0; i < (int)ans.size(); i++)
	{
		cout << ans[i] << " ";
	}
	cout << ENDL;
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) solve();
 	return 0;
}