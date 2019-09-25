#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int ehQuadPerfct(int n)
{
  int aux;
  double sqr = sqrt((double)n);
  aux = sqr;

  if(aux == sqr)
    return 1;
  return 0;
}
int hanoi(int n)
{
  int *varetas = (int *)calloc(n, sizeof(int));
  int i, qtd;
  int controle = 1;

  for (qtd = 1; controle == 1; qtd++)
  {
    controle = 0;
    for (i = 0; i < n; i++)
    {
      if (ehQuadPerfct(varetas[i]+qtd))
      {
        varetas[i] = qtd;
        controle = 1;
        break;
      }
      else if (varetas[i] == 0)
      {
        varetas[i] = qtd;
        controle = 1;
        break;
      }
    }
  }
  return qtd-2;
}
int main()
{
  int i, casos, n;
  scanf("%d", &casos);
  for (i = 0; i < casos; i++)
  {
    scanf("%d", &n);
    printf("%d\n", hanoi(n));
  }
  return 0;
}
