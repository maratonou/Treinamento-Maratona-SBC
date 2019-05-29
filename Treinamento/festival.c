/*Maratona de Programação da SBC – ACM ICPC – 2018
8
Problema F
Festival
Festivais de música deveriam ser pura diversão, porém alguns deles se tornam tão grandes a ponto de
causar dor de cabeça para os frequentadores. O problema é que são tantas atrações boas tocando em
tantos palcos que a simples tarefa de escolher quais shows assistir se torna complexa.
Para ajudar frequentadores de tais festivais, Fulano decidiu criar um aplicativo que, após avaliar
as músicas ouvidas em seus serviços de streaming favoritos, sugere quais shows assistir de modo que
não exista outra combinação de shows melhor de acordo com os critérios descritos a seguir:
• Para aproveitar a experiência ao máximo é importante assistir cada um dos shows escolhidos
por completo;
• Ir no festival e não ver um dos palcos está fora de cogitação;
• Para garantir que a seleção dos artistas seja compatı́vel com o usuário, contou-se quantas músicas
de cada artista o usuário conhece por já ter ouvido-as nos serviços de streaming. O total de
músicas conhecidas dos artistas escolhidos deve ser o maior possı́vel.*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int last;

typedef struct {

    int comeco, fim, musicas;

} Show;

typedef struct {

    int quantShows;
    Show *shows;

} Palco;

int diferenca(int a, int b)
{
  if(a > b)
    return a-b;

  return b-a;  
}

Show proximo_show(Palco *x, int n, int z, bool *ashow, int *ultPalco) {
  
  Show menor;
  int i = 0, j = 0;
  int comeco_menor = 10000, musicas_maior = 0;

  for (i = 0; i < n; i++){
    for(j = 0; j < x[i].quantShows; j++){

      if(z == 0)
      {
        if((x[i].shows[j].comeco >= z) && (x[i].shows[j].comeco <= comeco_menor) && (x[i].shows[j].musicas > musicas_maior)){
          comeco_menor = x[i].shows[j].comeco;
          musicas_maior = x[i].shows[j].musicas;
          menor = x[i].shows[j];
          *ashow = true;
          last = i;
        }
      }

      else
        if((x[i].shows[j].comeco >= z) && (x[i].shows[j].comeco <= comeco_menor) && (x[i].shows[j].musicas >= musicas_maior) && (diferenca(*ultPalco,i) < 2)){
          comeco_menor = x[i].shows[j].comeco;
          musicas_maior = x[i].shows[j].musicas;
          menor = x[i].shows[j];
          *ashow = true;
          last = i;
        }
    }
  }
  
  return menor;
}

Show sarrada(Show atual, Palco *ex, int n, int *ultPalco, bool first)
{
  int i = 0, j = 0;  

  for (i = 0; i < n; i++){
    for(j = 0; j < ex[i].quantShows; j++){
      if(ex[i].shows[j].comeco >= atual.comeco && ex[i].shows[j].comeco < atual.fim)
      {
        if(!first && (diferenca(*ultPalco,i) > 1))
          continue;
          
        if(ex[i].shows[j].musicas > atual.musicas)
        {
            atual = ex[i].shows[j];
            last = i;
        }
      }
    }
  }  

  return atual;
}

int main()
{
    int n = 0, unidades = 0, menor = 10000;
    int i, j;   
    Palco *palcos;   
	

    while(scanf("%i",&n) == 1)
    {  
    	int quant;
    	int quantMusicas = 0;
    	int indexI;
    	int indexJ;
        int fim = 0, inicio = 0;

        palcos = (Palco*) malloc(sizeof(Palco)*n);

        for(i=0;i<n;i++)
        {
            scanf("%i", &palcos[i].quantShows);

            palcos[i].shows = (Show*) malloc(sizeof(Show)*palcos[i].quantShows);

            for(j=0;j<palcos[i].quantShows;j++)
            {
                scanf("%i %i %i", &palcos[i].shows[j].comeco, &palcos[i].shows[j].fim, &palcos[i].shows[j].musicas);
            }
        }   

        bool *ashow = (bool*) malloc(sizeof(bool));
        *ashow = true;
        int anterior = 0;
        int resultado = 0;
        int *ultPalco = (int *) malloc(sizeof(int));
        *ultPalco = 0;
        bool first = true;

        while(*ashow)
        {
            *ashow = false;
            Show retorno =  proximo_show(palcos,n,anterior,ashow,ultPalco);          
            retorno =  sarrada(retorno,palcos, n, ultPalco, first);
            first = false;
            *ultPalco = last;
            anterior = retorno.fim;            
            if(*ashow)
            {                 
              resultado += retorno.musicas;
              printf("%i %i %i\n", retorno.comeco, retorno.fim, retorno.musicas);
            }            
        }                     
        printf("RESULTADOS AQUI GALERISON: %i", resultado);
        for(i=0;i<n;i++)
        {          
            free(palcos[i].shows);                     
        } 

        free(palcos);
         
    }   
 
	return 0;
}
