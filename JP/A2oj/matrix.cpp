#include <iostream>

using namespace std;

int main()
{
	int lin, col;
	int aux;
	for (int i= 1; i <=5; i++)
	{
		for (int j = 1; j <= 5; j++)
		{
			cin >> aux;
			if (aux == 1)
			{
				lin = i; 
				col = j;
			}
		}
	}
	cout << abs(lin-3)+abs(col-3) << "\n";
}