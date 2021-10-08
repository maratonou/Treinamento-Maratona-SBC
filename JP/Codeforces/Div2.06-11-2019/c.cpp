#include <iostream>
#include <cmath>

using namespace std;

bool eh_primo(long long n)
{
    for (long long i = 2; i <= sqrt(n); i++)
    {
        if (n%i == 0)
            return false;
    }
    return true;
}
long long retornaMenorD(long long n)
{
    long long x = -1;
    for (long long i = 2; i <= sqrt(n); i++)
    {
        if (n%i == 0)
        {
            x = i;
            break;
        }
    }
    return x;
}
bool eh_primoK(long long n, long long i)
{
    while (n % i == 0 && n > i)
    {
        n /= i;
    }
    if (n == i)
        return true;

    return false;
}
int main()
{
    long long n;
    cin >> n;
    long long menorD = retornaMenorD(n);
    // cout << "menorD = " << menorD << "\n";
    if (eh_primo(n))
    {
        cout << n << "\n";
    }
    else if (eh_primoK(n, menorD))
    {
        cout << menorD << "\n";
    }
    else
    {
        cout << "1\n";
    }
    
    return 0;
}