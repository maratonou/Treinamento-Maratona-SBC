#include <iostream>

using namespace std;

int main()
{
	int a, b, n, S;
	int q;
	cin >> q;
	for (int i = 0; i < q; i++)
	{
		int controle = -1;
		int aux;
		cin >> a >> b >> n >> S;
		while (S > 0 && controle != 0)
		{
			controle = 0;
			aux = S/n;
			if (aux > 0 && a > 0)
			{
				if (a >= aux)
				{
					controle = 1;
					a -= aux;
					S -= n*aux;
				}
				else if (a < aux)
				{
					controle = 1;
					S -= (a*n);
					a = 0;
				}
			}
			else if (b > 0)
			{
				controle = 1;
				if (b >= S)
				{
					b -= S;
					S = 0;
				}
				else
				{
					S -= b;
					b = 0;
				}
			}
		}
		if (S == 0)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}
