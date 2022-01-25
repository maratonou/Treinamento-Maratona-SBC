#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    string s;
    cin >> s;
    int maior = 0;
    int counter = 0;
    char aux = s[0];
    for (int i = 0; i < s.length(); i++)
    {   
        if (aux != s[i])
        {
            if (maior < counter)
            {
                maior = counter;
            }
            aux = s[i];
            counter = 0;
        }
        counter++;
    }
    if (maior < counter)
    {
        maior = counter;
    }
    cout << maior << "\n";
    return 0;
}