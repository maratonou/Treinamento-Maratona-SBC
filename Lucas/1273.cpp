// PROBLEMA: 1273 - Justificador
// https://www.urionlinejudge.com.br/judge/pt/problems/view/1273

#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n;
	cin >> n;

	while(1)
	{	
		string str[n];
		int maior = 0;
		
		for(int i=0; i < n; i++)
		{
			cin >> str[i];
			
			while(str[i].compare(0,1," ") == 0)
			{
				str[i].erase(0, 1);
			}

			if(str[i].size() > maior)
				maior = str[i].size();
		}

		for(int i=0; i < n; i++)
		{
			while(str[i].size() < maior)
			{
				str[i].insert(0, " ");
			}

			cout << str[i] << endl;
		}

		cin >> n;
		
		if(n==0)
			break;
		
		cout << endl;
	}

	return 0;
}
