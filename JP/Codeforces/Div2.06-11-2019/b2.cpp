#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <cstring>

using namespace std;
using ii = pair<int, int>;

int ehPossivel(char *s, char *t, int n)
{
	char contagem[26] = {0};
	for (int i = 0; i < n-1; i++)
	{
		contagem[s[i]-'a']++;
		contagem[t[i]-'a']++;
	}
	for (int i = 0; i < 26; i++)
	{
		if (contagem[i]%2 != 0)
			return 0;
	}
	return 1;
}

int main()
{
	int k, n;
	cin >> k;
	char *s, *t;
	for (int i = 0; i < k; i++)
	{
		cin >> n;
		s = new char[n+1];
		t = new char[n+1];

		cin >> s >> t;

		if (ehPossivel(s, t, n+1))
		{
			int qtd = 0;
			queue<ii> trocas;
			for (int j = 0; j < n; j++)
			{
				if (s[j] != t[j])
				{
					int controle = 0;
					for (int x = j+1; x < n; x++)
					{
						if (s[x] == s[j]) //uma char *s
						{
							char aux = t[j];
							t[j] = s[x];
							s[x] = aux;
							trocas.push({x, j});
							break;
						}
						else if (t[x] == t[j])  //uma char *t
						{
							char aux = s[j];
							s[j] = t[x];
							t[x] = aux;
							trocas.push({j, x});
							break;
						}
						else if (s[x] == t[j]) //duas char *s
						{
							char aux = t[x];
							t[x] = s[x];
							s[x] = aux;
							trocas.push({x, x});
							aux = s[j];
							s[j] = t[x];
							t[x] = aux;
							trocas.push({j, x});
							break;
						}
						else if (t[x] == s[j]) //duas char *t
						{
							char aux = s[x];
							s[x] = t[x];
							t[x] = aux;
							trocas.push({x, x});
							aux = t[j];
							t[j] = s[x];
							s[x] = aux;
							trocas.push({x, j});
							break;
						}
					} //end for x = j to n
				} //end if s[j] != t[j]
			} // end percurso for j = 0 to n
			if (trocas.size() <= 2*n && strcmp(s, t) == 0)
			{
				cout << "Yes\n";
				cout << trocas.size() << "\n";
				int tam = trocas.size();
				ii aux;
				for (int j = 0; j < tam; j++)
				{
					aux = trocas.front();
					cout << aux.first+1 << " " << aux.second+1 << "\n";
					trocas.pop();
				}
			}
			else
				cout << "No\n";
		} // end if ehPossivel
		else
			cout << "No\n";

		delete[] s;
		delete[] t;
	}
	return 0;
}
