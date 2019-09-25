#include <stdio.h>

int menorSubarray(int *fita, int tam, int k, int c, int inicio)
{
	int somaAux = 0;
	int soma = 0;
	int i;
	int iniAux = inicio;
	// printf("\ninicio = %d\ntam = %d\nk = %d\nc = %d\n\n", inicio, tam, k, c);
	if (tam-inicio >= c && k > 0)
	{
		// printf("\ntam-inicio = %d, k = %d\n", tam-inicio, k);
		for (i = inicio; i < inicio+c; i++)
		{
			// printf("i = %d  fita[i] = %d\n", i, fita[i]);
			soma += fita[i];
		}
		// printf("\n\n");
		somaAux = soma;
		while(i < tam)
		{
			// printf("fita[i-c] = %d, fita[i] = %d, i-c = %d, i = %d\n", fita[i-c], fita[i], i-c, i);
			somaAux -= fita[i-c];
			somaAux += fita[i];
			// printf("soma = %d, somaAux = %d\n", soma, somaAux);
			if (somaAux < soma)
			{
				soma = somaAux;
				iniAux = i+1;
			}
			i++;

		}
		// printf("somaFinal = %d\n", soma);
		int menor1 = menorSubarray(fita, iniAux-c, k-1, c, inicio);
		int menor2 = menorSubarray(fita, tam, k-1, c, iniAux);
		int menorLado;
		if (tam-iniAux < c)
		{
			menorLado = menor1;
		}
		else if ((iniAux-c)-inicio < c)
		{
			menorLado = menor2;
		}
		else
		{
			if(menor1 < menor2)
				menorLado = menor1;
			else
				menorLado = menor2;

		}
		// printf("\n\nsoma+menorLado = %d\nsoma = %d, menor1 = %d, menor2 = %d\n\n", soma+menorLado, soma, menor1, menor2);
		return soma + menorLado;
	}
	return 0;
}
int main()
{
	int i;
	int n, k, c;
	int somatorio = 0;
	scanf("%d %d %d", &n, &k, &c);

	int fita[n];

	for (i = 0; i < n; i++)
	{
		// printf("a1\n");
		scanf(" %d", &fita[i]);
		somatorio += fita[i];
	}
	int menor = menorSubarray(fita, n, k, c, 0);
	if (menor < 0)
		menor *= (-1);

	printf("%d\n", somatorio-menor);
	return 0;
}


