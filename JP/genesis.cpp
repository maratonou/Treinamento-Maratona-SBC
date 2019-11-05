#include <bits/stdc++.h>

using namespace std;

int main()
{
    long int n;
    cin >> n;

    for (int i = 0; i < 10e9; i = (i+1)*2)
    {
        if (i == n)
        {
            cout << "Second player wins" << endl;
            break;
        }
        if (i > n)
        {
            cout << "First player wins" << endl;
            break;
        }
    }

    return 0;
}