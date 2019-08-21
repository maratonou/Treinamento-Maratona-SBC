#include <stdio.h>
#include <stdlib.h>

typedef struct lista Lista;
struct lista
{
	int id;
	int custo;
	Lista *prox;
};

typedef struct vert Vertices;
struct vert
{
	Lista *lista;
};

Lista *inserir(int id, int custo, Vertices *inicio)
{
	Lista *aux = (Vertices *)malloc(sizeof(Vertices));

	aux->id = id;
	aux->custo = custo;
	aux->prox = inicio;

	return aux;
}

int main()
{

	int n, m, c, k;
	int i, j;
	Vertices *vert;
	int *visitados;

	while(scanf("%d %d %d %d", &n, &m, &c, &k))
	{
		if (n==0)
			break;

		vert = (Vertices *)malloc(sizeof(Vertices)*n);
		visitados = (int *)calloc(sizeof(int)*n);

		int verti, adj, custo;

		for (i = 0; i < m; i++)
		{
			scanf("%d %d %d", &verti, &adj, &custo);
			vert[verti].prox = insere(adj, custo, vert[verti].prox);
			vert[adj].prox = insere(verti, custo, vert[adj].prox);
		}

		free(vert);
		free(visitados);

	}
	return 0;
}