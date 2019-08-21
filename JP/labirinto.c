#include <stdio.h>
#include <stdlib.h>

typedef struct aresta
{
	int v1, v2; 
} Aresta;

int main ()
{
	int casos;
	int V, A, n;
	scanf("%d\n", &casos);
	while (casos > 0)
	{
		//progama é realizado
		scanf("%d", &n);
		scanf("%d %d", &V, &A);
		Aresta *lista = (Aresta *)malloc(A* sizeof(Aresta));
		int *visitados = (int *)calloc(V, sizeof(int));
		visitados[n] = 1;
		int i, j;
		int movimentos = 0;
		for (i = 0; i < A; i++)
			scanf("%d %d", &lista[i].v1, &lista[i].v2);
		for (i = 0; i < V; i++)
		{
			for (j = 0; j < A; j++)
			{
				// printf("%d\n", j);
				if (lista[j].v1 == i && !visitados[lista[j].v2])
				{
					// printf("%d %d\n", lista[j].v1, lista[j].v2);
					visitados[lista[j].v2] =1;
					movimentos++;
					i = -1;
				}
				else if (lista[j].v2 == i && !visitados[lista[j].v1])
				{
					// printf("%d %d\n", lista[j].v2, lista[j].v1);
					visitados[lista[j].v1] =1;
					movimentos++;
					i = -1;
				}
			}
		}
		printf("%d\n", movimentos*2);
		//fim programa
		casos--;
	}
}