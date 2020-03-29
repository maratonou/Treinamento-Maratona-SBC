// PROBLEMA: 1436 - Jogo do Tijolo
// https://www.urionlinejudge.com.br/judge/pt/problems/view/1436

#include <iostream>
#include <string>

using namespace std;

int main()
{
	int t;
	cin >> t;

	for(int i=0; i<t; i++)
	{
		int n;
		cin >> n;

		int idade[n];

		for(int j=0; j<n; j++)
			cin >> idade[j];

		int capita = idade[n/2];

		cout << "Case " << i+1 << ": " << capita << endl;
	}

	return 0;
}
