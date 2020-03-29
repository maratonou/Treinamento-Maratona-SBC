// PROBLEMA: 1192 - O jogo Matemático de Paula
// https://www.urionlinejudge.com.br/judge/pt/problems/view/1192

#include <iostream>
#include <ctype.h>

using namespace std;

int main()
{
	
	int n;
	cin >> n;

	for(int i=0; i<n; i++)
	{
		char str[4];
		cin >> str;

 	int a = (int) (str[0] - '0');
 	int b = (int) (str[2] - '0');

 	if(a==b)
 		cout << a*b << endl;

 	else if(isupper(str[1]))
 		cout << b-a << endl;

 	else if(islower(str[1]))
 		cout << a+b << endl;
	}

	return 0;
}
