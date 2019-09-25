#include <stdio.h>
#include <stdlib.h>

typedef struct pedidos
{
    int pizzas, tempo;
}Pedido;

int roberto_pizzas(Pedido *pedidos, int num_pedidos, int *visitados, int max_pizzas)
{
    int cont_pizza = 0;
    int cont_tempo = 0;
    int maior_index;
    int controle;
    do
    {
        controle = 0;
        int i, maior = 0;
        for (i = 0; i < num_pedidos; i++)
        {
            if (pedidos[i].tempo > maior && visitados[i] == 0 && max_pizzas > cont_pizza+pedidos[i].pizzas)
            {
                maior = pedidos[i].tempo;
                controle = 1;
                maior_index = i;
            }
        }
        visitados[maior_index] = 1;
        cont_pizza += pedidos[maior_index].pizzas;
        cont_tempo += maior;
    }while(controle != 0);
    return cont_tempo;
}

int main()
{
    int i, n_pedidos, max_pizzas;
    Pedido *pedidos;
    int *visitados;

    scanf("%d", &n_pedidos);
    while(pedidos > 0)
    {
        if (n_pedidos == 0)
            break;
        scanf("%d", &max_pizzas);
        pedidos = (Pedido *)malloc(sizeof(Pedido)*n_pedidos);
        visitados = (int *)calloc(n_pedidos, sizeof(int));

        for (i = 0; i < n_pedidos; i++)
        {
            scanf("%d %d", &pedidos[i].tempo, &pedidos[i].pizzas);
        }
        printf("%d min.\n", roberto_pizzas(pedidos, n_pedidos, visitados, max_pizzas));
        scanf("%d", &n_pedidos);
    }
    return 0;
}