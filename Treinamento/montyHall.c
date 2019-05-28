#include <stdio.h>

int main()
{   
    int n, i, ganhou, carro;

    while(scanf("%d", &n))
    {
        ganhou = 0;
        for(i = 0; i < n; i++)
        {
            scanf("%d", &carro);
        
            if(carro != 1)
              ganhou++;
        }
        printf("%d\n", ganhou);
    }

    return 0;
}