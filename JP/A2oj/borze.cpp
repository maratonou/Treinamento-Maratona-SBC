#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	char str[200];
	char dest[200] = "";
	cin >> str;
	int controle = 0;
	for (int i = 0; i < strlen(str); i++)
	{
		if (controle == 0)
		{
			if (str[i] == '.')
			{
				strcat(dest, "0");
			}
			else if (str[i] == '-')
				controle = 1;
		}
		else if (controle == 1)
		{
			if (str[i] == '.')
			{
				strcat(dest, "1");
			}
			else if (str[i] == '-')
				strcat(dest, "2");
			controle = 0;
		}
	}
	cout << dest << "\n";
	return 0;
}
