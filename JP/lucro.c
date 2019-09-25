#include <stdio.h>
#include <stdlib.h>

#define max(a, b) ((a>b) ? (a):(b))

int lucro(int *receita, int dias, int custo)
{
    int i, maior_atual = 0;
    int maior_total = -1;
    int lucro;

    for(i = 0; i < dias; i++)
    {
        lucro = receita[i]-custo;
        maior_atual = max(0, maior_atual+lucro);
        maior_total = max(maior_total, maior_atual);
    }

    return maior_total;
}
int main()
{
    int i, n_dias, custo_dia;
    int *receita;

    while(scanf("%d %d", &n_dias, &custo_dia) != EOF)
    {
        receita = (int *)malloc(sizeof(int)*n_dias);
        for (i = 0; i < n_dias; i++)
        {
            scanf("%d", &receita[i]);
        }
        printf("%d\n", lucro(receita, n_dias, custo_dia));
    }   
    return 0;
}
