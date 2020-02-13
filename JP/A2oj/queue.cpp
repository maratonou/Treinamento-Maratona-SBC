#include <iostream>

using namespace std;

int main()
{
	int n, t;
	cin >> n >> t;
	string s;
	cin >> s;
	for (int i = 0; i < t; i++)
	{
		for (int j = 0; j < n-1; j++)
		{
			if (s[j] == 'B' && s[j+1] == 'G')
			{
				char aux;
				aux = s[j];
				s[j] = s[j+1];
				s[j+1] = aux;
				j++;
			}
		}
	}
	cout << s << "\n";
	return 0;
}

