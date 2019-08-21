#include<stdio.h>
#include<stdlib.h>

typedef struct{
  int rot1;
  int rot2;
  int preco;
} conexao;

int acabou(int *visitados, int R)
{
  int i;
  for(i=0;i<R;i++)
  {
    if(visitados[i] == 0)
      return 0;
  }

  return 1;
}

int main()
{
  int R,C;
  int i, j;
  int somatorio = 0;
  
  scanf("%d %d", &R, &C);

  conexao* conex = (conexao*) malloc(sizeof(conexao)*C); 
  int* visitados = (int*) malloc(sizeof(int)*R);

  for(i=0;i<C;i++)
  {
    scanf("%d %d %d", &conex[i].rot1, &conex[i].rot2, &conex[i].preco);

    if(i<R)
      visitados[i] = 0;
  }

  visitados[0] = 1;

  while(!acabou(visitados,R))
  {
    int i,j;
    int min = 100000, indexJ;
    
    for(i = 0 ; i < R ; i++)
    {
      if(visitados[i] == 1)
      {
        for(j = 0; j < C ; j++)
        {
          if((conex[j].rot1 - 1) == i && visitados[conex[j].rot2-1] == 0)
          {
            if(conex[j].preco < min)
            {
              indexJ = conex[j].rot2-1;
              min = conex[j].preco;
            }
          }

          if((conex[j].rot2 - 1) == i && visitados[conex[j].rot1 - 1] == 0)
          {
            if(conex[j].preco < min)
            {
              indexJ = conex[j].rot1 - 1;
              min = conex[j].preco;
            }
          }
        }
      }
    }

    visitados[indexJ] = 1;
    somatorio += min;
  }

  printf("%i\n", somatorio);
  
}

