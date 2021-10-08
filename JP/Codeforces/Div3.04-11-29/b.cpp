#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int q, n;
	cin >> q;
	vector<int> vet;
	vector<int>::iterator it;
	int aux, value;
	for (int k = 0; k < q; k++)
	{
		value = 1;
		int pos;
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cin >> aux;
			vet.push_back(aux);
		}
		int visitados[n-1] = {0};
		while (value < n)
		{
			it = find(vet.begin(), vet.end(), value);
			pos = distance(vet.begin(), it);
			while (pos > 0 && visitados[pos-1] == 0)
			{
				if (vet[pos-1] > vet[pos])
				{
					aux = vet[pos];
					vet[pos] = vet[pos-1];
					vet[pos-1] = aux;
					visitados[pos-1] = 1;
				}
				else
				{
					break;
				}
				it = find(vet.begin(), vet.end(), value);
				pos = distance(vet.begin(), it);
			}
			value++;
		}
		int i;
		for (i = 0; i < n-1; i++)
		{
			cout << vet[i] << " ";
		}
		cout << vet[i] << "\n";
		vet.clear();
	}
	return 0;
}