// PROBLEMA: 1091 - Divisão da Nlogônia
// https://www.urionlinejudge.com.br/judge/pt/problems/view/1091

#include <iostream>

using namespace std;

int main()
{
	
	while(1)
	{
		int k;
		cin >> k;

		if(k == 0)
			break;

		int n, m;
		cin >> n >> m;

		for(int i=0; i < k; i++)
		{
			int x,y;
			cin >> x >> y;
			
			if(x == n || y == m)
				cout << "divisa" << endl;

			else if(x < n && y > m)
				cout << "NO" << endl;

			else if(x > n && y > m)
				cout << "NE" << endl;

			else if(x > n && y < m)
				cout << "SE" << endl;

			else if(x < n && y < m)
				cout << "SO" << endl;
		}
	}

	return 0;
}
