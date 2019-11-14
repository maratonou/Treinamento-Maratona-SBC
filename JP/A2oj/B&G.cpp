#include <iostream>

using namespace std;

int main()
{
    int n, t, controle = 0;
    cin >> n >> t;
    char string[n+1];
    cin >> string;
    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < n-1; j++)
        {
            if (string[j] == 'B')
            {
                if (controle == 0 && string[j+1] == 'G')
                {
                    char aux = string[j];
                    string[j] = string[j+1];
                    string[j+1] = aux; 
                    controle = 1;
                }
            }
            else
            {
                controle = 0;
            }
            
        }
    }
    cout << string << "\n";
    return 0;
}