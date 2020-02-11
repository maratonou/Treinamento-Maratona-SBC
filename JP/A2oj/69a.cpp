#include <iostream>

using namespace std;

int main()
{
	int qtd, aux, result[3];
	result[0] = result[1] = result[2] = 0;
	cin >> qtd;

	for(int i = 0; i < qtd*3; i++)
	{
		cin >> aux;
		result[i%3] += aux;
	}
	if (result[0] == result[1] && result[1] == result[2] && result[2] == 0)
		printf("YES\n");
	else
		printf("NO\n");

	return 0;
}
