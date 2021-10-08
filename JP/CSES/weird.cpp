#include <iostream>

using namespace std;
int main()
{
    ios_base :: sync_with_stdio(false);
    long long int n;
    scanf("%lld", &n);
    printf("%lld ", n);
    while (n > 1)
    {
        if (n%2) //odd
        {
            n = n*3 + 1;
            printf("%lld ", n);
        }
        else // even
        {
            n /= 2;
            printf("%lld ", n);
        }
    }
    printf("\n");
    return 0;
}