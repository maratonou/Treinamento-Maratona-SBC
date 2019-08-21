#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int eh_valido(int num, int A, int B, int C, int D)
{
    if (num % A > 0)
        return 0;
    if (num % B == 0)
        return 0;
    if (C % num > 0)
        return 0;
    if (D % num == 0)
        return 0;

    return 1;
}
int main()
{
    int i;
    int a, b, c, d;
    int menorD = -1;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    for (i = a; i <= c/2; i=+a)
    {
        if (eh_valido(i, a, b, c, d))
        {
            menorD = i;
            break;
        }
    }
    printf("%d\n", menorD);
    // printf("%lf\n", sqrt(8.0));
    return 0;
}