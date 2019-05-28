#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>


typedef struct bolinha
{
  int l;
  int c;
}Bolinha;

int modulo(int a)
{
    if (a < 0)
    {
      return -a;
    }
    return a;
}

int impossivel(Bolinha *vetor, int n)
{
  int i;
  int bolinhas = n;
  
  for(i=0; i<n; i++)
  {
    if(vetor[i].l == 2 && vetor[i].c == 1)
      bolinhas--; 

      
    else if(vetor[i].l == 1 && vetor[i].c == 2)
      bolinhas--;
  }

  return bolinhas;
}

bool uma_jogada(Bolinha *vetor, int n){
  int i;
  bool var = false;
  	
  for(i = 0; i < n; i++){
    if((vetor[i].l == 0) || (vetor[i].c == 0)) {
      var = true;
      break;
    }
    if(vetor[i].l == vetor[i].c){
      var = true;
      break;
    }
  }
  return var;
}

bool last_check(Bolinha *vetor, int n)
{
  int resto = impossivel(vetor, n);

  if(resto == 0)
    return false;

  int superior = 0, inferior = 0;

  int i;

  for(i = 0; i<n ; i++)
  {
    if(vetor[i].l != 0 && vetor[i].c != 0)
    {
      if(vetor[i].l != 2 && vetor[i].c != 1)
      {
        if(vetor[i].l != 1 && vetor[i].c != 2)
        {
          if(vetor[i].l < vetor[i].c)
            superior += 1;

          if(vetor[i].l > vetor[i].c)
            inferior += 1;
        }
      }
    }
  }

  if(superior != inferior)
    return true;

  int j = 0, transpostas = 0;
  //bool possuiTransposta = false;

  for(i = 0; i<n ; i++)
  {  
    if(vetor[i].l != 0 && vetor[i].c != 0)
    {
      if(vetor[i].l != 2 && vetor[i].c != 1)
      {
        if(vetor[i].l != 1 && vetor[i].c != 2)
        {
        	if(vetor[i].l > vetor[i].c)
        	{       		       		
        		for(j = 0; j<n ; j++)
            {	          	
              if(i != j && (vetor[i].l == vetor[j].c) && (vetor[i].c == vetor[j].l))
              {					
                transpostas++;
                break;
              }
            }
			    }          
        }
      }
    }        
  }  
  
  if(transpostas != resto/2)
      return true;

  return false;
}

int main ()
{
  int n;
  Bolinha *bolinhas;

  while (scanf("%d", &n) == 1)
  {
    bolinhas = (Bolinha *) malloc(sizeof(Bolinha) * n);
    int i = 0;
    for (i = 0; i < n; i++)
    {
      scanf("%i %i", &bolinhas[i].l, &bolinhas[i].c);
    }
    
    if(uma_jogada(bolinhas,n))
      printf("Y");

    else if(last_check(bolinhas,n))
      printf("Y");

    else 
      printf("N");    

    /*if(impossivel(bolinhas, n))
        printf("N");

    else
      printf("Y");
      */

    free(bolinhas);
  }  
  return 0;
}
