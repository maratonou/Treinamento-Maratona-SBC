/*Maratona de Programação da SBC – ACM ICPC – 2018
14
Problema I
Interruptores
No painel de controle de um grande anfiteatro existem N interruptores, numerados de 1 a N , que
controlam as M lâmpadas do local, numeradas de 1 a M . Note que o número de interruptores e
lâmpadas não é necessariamente o mesmo e isso acontece porque cada interruptor está associado a
um conjunto de lâmpadas e não apenas a uma lâmpada. Quando um interruptor é acionado, o estado
de cada uma das lâmpadas associadas a ele é invertido. Quer dizer, aquelas apagadas acendem e as
acesas se apagam.*/

#include <stdio.h>
#include <stdlib.h>

int apagou(int* e_l,int M)
{
	int i;

	for (i = 0; i < M; ++i)
	{
		if(e_l[i] == 1)
			return 0;
	}

	return 1;
}

void troca_estado(int* lamp)
{
	if(*lamp == 1)
		*lamp = 0;

	else
		*lamp = 1;
}

int sarrada(int* e_i, int* e_a, int M)
{
	int i;

	for (i = 0; i < M; ++i)
	{
		if(e_i[i] !=  e_a[i])
			return 0;
	}

	return 1;
}	

int main()
{
	int N,M;

	while(scanf("%i %i", &N,&M))
	{
		int i,j;
		int L;
		int estado_lampadas[M];
		int estado_inicial[M];
		int **interruptores = (int**) malloc(sizeof(int*)*N);
		int tamInterruptor[N];
		int cont = 0;
		
		scanf("%i", &L);
		//printf("Ok 0\n");

		for(i=0;i<L;i++)
		{
			estado_lampadas[i] = 0;
			estado_inicial[i] = 0;
		}

		for(i=0;i<L;i++)
		{
			int aux;

			scanf("%i", &aux);
			//printf("Ok 1\n");
			
			estado_lampadas[aux - 1] = 1;

			estado_inicial[aux-1] = 1;
		}

		for(i=0;i<N;i++)
		{
			int aux;

			scanf("%i", &aux);
			//printf("Ok 2\n");

			tamInterruptor[i] = aux;

			interruptores[i] = (int*) malloc(sizeof(int)*aux);

			for(j=0;j<aux;j++)
			{
				scanf("%i", &interruptores[i][j]);
				//printf("Ok 3\n");
			}
		}

		i = 0;

		while(1)
		{
			cont++;

			for(j=0;j<tamInterruptor[i];j++)
			{
				int aux = interruptores[i][j];

				troca_estado(&estado_lampadas[aux-1]);
			}

			if(apagou(estado_lampadas,M))
				break;

			if(i == N-1 && sarrada(estado_inicial,estado_lampadas,M))
			{
				printf("-1\n");
				i = -1;
				break;
			}
			
			i = (i+1)%N;

		}

		if(i>0)
			printf("%i\n", cont);
	}

	return 0;
}