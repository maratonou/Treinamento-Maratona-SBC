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
	int n, k; cin >> n >> k;
	cin.ignore();
	string s; cin >> s;
	vi v(n, 0);
	int cp = k;
	for (int i = 0; i < n; i++)
	{
		if (cp == 0) break;
		if (k % 2)
		{
			if (s[i] == '1')
			{
				cp--;
				v[i]++;
			}
		}
		else
		{
			if (s[i] != '1')
			{
				cp--;
				v[i]++;
			}
		}
	}
	if (cp > 0)
	{
		v[v.size()-1] += cp;
	}
	for (int i = 0; i < n; i++)
	{
		if (k % 2)
		{
			if (v[i] %2 == 0)
			{
				if (s[i] == '1')
				{
					s[i] = '0';
				}
				else
				{
					s[i] = '1';
				}
			}
		}
		else
		{
			if (v[i] %2 != 0)
			{
				if (s[i] == '1')
				{
					s[i] = '0';
				}
				else
				{
					s[i] = '1';
				}
			}
		}
	}
	cout << s << ENDL;
	for(auto x: v)
	{
		cout << x << " ";
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