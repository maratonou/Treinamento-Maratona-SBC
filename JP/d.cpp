#include <iostream>

using namespace std;

int main()
{
	long q, n;
	long long k;

	cin >> q;
	for (int j = 0; j < q; j++)
	{
		string bin;
		cin >> n >> k;
		cin >> bin;
		int cont_um = 0;
		for (int i = 0; i < n; i++)
		{
			if (bin[i] == '0')
			{
				if (k > cont_um)
				{
					char aux = bin[i];
					bin[i] = bin[i-cont_um];
					bin[i-cont_um] = aux;
					k-=cont_um;
				}
				else
				{
					char aux = bin[i];
					bin[i] = bin[i-k];
					bin[i-k] = aux;
					k = 0;
				}
			}
			else
			{
				cont_um++;
			}
		}
		cout << bin << endl;
	}
	return 0;
}