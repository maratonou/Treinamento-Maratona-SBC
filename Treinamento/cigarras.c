#include <stdio.h>
#include <stdlib.h>

int mdc_TwoNumber(int a, int b)
{
    if(a < b)
    {
        int aux = a;
        a = b;
        b = aux;
    }

    while(a%b != 0)
    {
        int aux = a%b;
        a = b;
        b = aux;
    }

    return b;
}

int mmc_Numbers(int a, int b)
{
    int mmc;

    mmc = (a*b)/mdc_TwoNumber(a,b);

    return mmc;
}

int main()
{
    int N, L;
    int i;    
    int mdc;
    
    scanf("%i %i",&N,&L);
    int ciclos[N];

    for (i = 0; i < N; i++)
        scanf("%i",&ciclos[i]);    

    int mmc = mmc_Numbers(ciclos[0],ciclos[1]);

    for (i = 2; i < N; i++)
        mmc = mmc_Numbers(mmc,ciclos[i]);    

    printf("MMC = %i\n\n",mmc);

    int val = 0;

    val = L/mmc;

    printf("Val max = %i\n\n",val);

    mdc = mdc_TwoNumber(val,mmc);
    
    while(mdc != 1)
    {
      mmc /= mdc;
      val *= mdc;
      
      mdc = mdc_TwoNumber(val,mmc);
    }   

    printf("MDC = %i\n\n",mdc);
    
    printf("%i\n", val);

    return 0;
}