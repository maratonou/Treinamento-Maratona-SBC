/* Maratona de Programação da SBC – ACM ICPC – 2018
2
Problema B
Bolinhas de Gude
Usar bolinhas de gude como moeda não deu muito certo em Cubicônia. Na tentativa de se redimir
com seus amigos, depois de roubar suas bolinhas de gude, o imperador decidiu convidar todos para
uma noite de jogos em seu palácio.
Naturalmente, os jogos utilizam bolinhas de gude, afinal agora o imperador precisa encontrar
alguma utilidade para tantas bolinhas. N bolinhas de gude são espalhadas em um grande tabuleiro
cujas linhas são numeradas de 0 a L e as colunas numeradas de 0 a C. Os jogadores alternam turnos
e em cada turno o jogador da vez deve escolher uma das bolinhas de gude e movê-la. O primeiro
jogador que mover uma bolinha para a posição (0, 0) é o vencedor. Para que o jogo seja interessante,
os movimentos são limitados; do contrário, o primeiro jogador sempre moveria a bolinha para a posição
(0, 0) e venceria. Um movimento consiste em escolher um inteiro u maior que 0 e uma bolinha, cuja
localização denotaremos por (l, c), e movê-la para uma das seguintes posições, desde que a mesma não
saia do tabuleiro:
• (l − u, c);
• (l, c − u); ou
• (l − u, c − u).
Note que mais de uma bolinha de gude pode ocupar a mesma posição no tabuleiro.
Como o imperador não gosta de perder você deve ajudá-lo a determinar em quais partidas ele deve
participar. Como é de se esperar, sempre que joga o imperador fica com o primeiro turno. Assumindo
que todos jogam de forma ótima, seu programa deve analisar a distribuição inicial das bolinhas de
gude no tabuleiro e informar se é possı́vel ou não que o imperador vença caso ele jogue.
Entrada
A primeira linha contém um inteiro N (1 ≤ N ≤ 1000). Cada uma das N linhas seguintes contém
dois inteiros l i e c i indicando em qual linha e coluna a i-ésima bolinha de gude se encontra no tabuleiro
(1 ≤ l i , c i ≤ 100).
Saı́da
Seu programa deve produzir uma única linha contendo o caractere Y caso seja possı́vel para o
imperador ganhar o jogo ou N caso contrário.*/

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
