/*Maratona de Programação da SBC – ACM ICPC – 2018
3
Problema C
Cortador de Pizza
Vô Giuseppe ganhou de presente um cortador profissional de pizza, daqueles do tipo carretilha e, para
comemorar, assou uma pizza retangular gigante para seus netos! Ele sempre dividiu suas pizzas em
pedaços fazendo cortes ao longo de linhas contı́nuas, não necessariamente retilı́neas, de dois tipos:
algumas começam na borda esquerda da pizza, seguem monotonicamente para a direita e terminam
na borda direita; outras começam na borda inferior, seguem monotonicamente para cima e terminam
na borda superior. Mas Vô Giuseppe sempre seguia uma propriedade: dois cortes do mesmo tipo
nunca podiam se interceptar. Veja um exemplo com 4 cortes, dois de cada tipo, na parte esquerda da
figura, que dividem a pizza em 9 pedaços.*/


#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct coordenadasH
{
	int y[2]; 
} Left_Right;

typedef struct coordenadasV
{
	int x[2]; 
} Down_Up;

bool interceptaV(Down_Up l1, Down_Up l2)
{
  	if(l1.x[0] < l2.x[0]  && l1.x[1] > l2.x[1])
    	return true;
  
  	if(l1.x[0] > l2.x[0]  && l1.x[1] < l2.x[1])
    	return true;

  	return false;  
}

bool interceptaH(Left_Right l1, Left_Right l2)
{
  	if(l1.y[0] < l2.y[0]  && l1.y[1] > l2.y[1])
    	return true;
  
  	if(l1.y[0] > l2.y[0]  && l1.y[1] < l2.y[1])
    	return true;

  	return false;
}
int main()
{
	int x, y, h, v, i, j, qtePizza;

  	while(scanf("%d %d", &x, &y))
  	{
  		qtePizza = 0;
		scanf("%d %d", &h, &v);

    	Left_Right *tipo_left;
    	Down_Up *tipo_down;

	    tipo_left = (Left_Right*) malloc(h * sizeof(Left_Right));
	    tipo_down = (Down_Up*) malloc(v * sizeof(Down_Up));

	    for(i = 0; i < h; i ++)
    	{
      		scanf("%d %d", &tipo_left[i].y[0], &tipo_left[i].y[1]);
    	}
    
   	 	for(i = 0; i < v; i ++)
    	{
      		scanf("%d %d", &tipo_down[i].x[0], &tipo_down[i].x[1]);
    	}
    	for (i = 0; i < h; i++)
    	{
      		for (j = i+1; j < h; j++)
      		{
        		if(interceptaH(tipo_left[i], tipo_left[j]))
          			qtePizza++;
      		}
    	}
    	for (i = 0; i < v; i++)
    	{
     	 	for (j = i+1; j < v; j++)
      		{
        		if(interceptaV(tipo_down[i], tipo_down[j]))
          			qtePizza++;
      		}	
    	}
    	qtePizza += (v+1)*(h+1);

    	printf("%d\n", qtePizza);

    	free(tipo_left);
    	free(tipo_down);
  	}
  	return 0;
}