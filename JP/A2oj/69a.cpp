#include <iostream>

using namespace std;

int main()
{
	int qtd, aux, result = 0;
	cin >> qtd;

	for(int i = 0; i < qtd*3; i++)
	{
		cin >> aux;
		result += aux;
	}
	if (result == 0)
		printf("YES\n");
	else
		printf("NO\n");

	return 0;
}
