#include <iostream>

using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    int n;
    cin >> n;
    int bits[n] = {};
    int aux;
    for (int i = 0; i < n-1; i++)
    {
        cin >> aux;
        bits[aux-1] = 1;
    } 
    for (int i = 0; i < n; i++)
    {
        if (bits[i] != 1)
        {
            printf("%d\n", i+1);
        }
    }
    return 0;
}