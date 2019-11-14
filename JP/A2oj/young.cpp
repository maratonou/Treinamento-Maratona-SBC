#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int vet[n][3];
	int result[3];
	result[0] = result[1] = result[2] = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> vet[i][0] >> vet[i][1] >> vet[i][2];
		for (int j = 0; j < 3; j++)
			result[j] += vet[i][j];
	}
	if (result[0] == result[1] && result[1] == result[2] && result[2] == 0)
		cout << "YES\n";
	else
		cout << "NO\n";
}