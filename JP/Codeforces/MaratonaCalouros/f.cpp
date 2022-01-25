#include "bits/stdc++.h"

using namespace std;
 
const string _endl = "\n";

using ll = long long;
using ii = pair<int, int>;
using ull = unsigned long long;
using vi = vector<int>;


void solve()
{
	int a, b;
	string s;
	cin >> a >> b;
	cin >> s;
	map<char, int> mapa;
	int n = s.size();

	mapa['0'] = a - count(s.begin(), s.end(),  '0');
	mapa['1'] = b - count(s.begin(), s.end(),  '1');
	int mid = n/2;

	for (int i = 0; i <= mid; i++)
	{
		if (s[i] == '?' && s[n-1-i] != '?')
		{
			s[i] = s[n-i-1];
			mapa[s[n-i-1]]--;
		}
		else if (s[i] != '?' && s[n-i-1] == '?')
		{
			s[n-i-1] = s[i];
			mapa[s[i]]--;
		}
	}

	for (int i = 0; i <= mid; i++)
	{
		if (s[i] == '?' && s[n-1-i] == '?')
		{
			int lim = 2;
			if( i == n-i-1) lim = 1;
			if (mapa['0'] >= lim)
			{
				s[i] = '0';
				s[n-i-1] = '0';
				mapa['0'] -= lim;
			}
			else if(mapa['1'] >= lim)
			{
				s[i] = '1';
				s[n-i-1] = '1';
				mapa['1'] -= lim;
			}
			else
			{
				cout << "-1\n";
				return;
			}
		}
	}

	if ( mapa['0'] > 0 || mapa['1'] > 0)
	{
		cout << "-1\n";
		return;
	}
	for (int i = 0; i <= n/2; i++)
	{
		if (s[i] != s[n-i-1])
		{
			cout << "-1\n";
			return;
		}
	}
	cout << s << _endl;
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) solve();
 	return 0;
}