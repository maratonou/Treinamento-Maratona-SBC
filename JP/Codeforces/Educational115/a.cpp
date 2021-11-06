#include "bits/stdc++.h"

using namespace std;
 
using ll = long long;
using ii = pair<int, int>;
using ull = unsigned long long;
using vi = vector<int>;


int check_position(int m, vector<string> mapa, i, j)
{
	if (i < 0 || j < 0 || i == 2 || j == m)
	{
		return 0;
	}
	else if (mapa[i][j] == '1')
	{
		return 0;
	}
	return 1;
}

void solve()
{
    int m;
    cin >> m;
	vector<string> level (2);
	queue<ii> q;
	q.emplace(0,0);

	while(!q.empty)
	{
		auto[x,y] = q.front();
		q.pop();
		for (int dx = -1; dx <= 1, dx++)
		{
			for (int dy = 0; dy <= 1;)
		} 
	}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) solve();
 	return 0;
}