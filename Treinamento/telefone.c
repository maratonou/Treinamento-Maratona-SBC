#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

char * letras(int numero){

  switch(numero){
    case 1:
      return "ij";
    break;

    case 2:
      return "abc";
    break;

    case 3:
      return "def";
    break;

    case 4:
      return "gh";
    break;

    case 5:
      return "kl";
    break;

    case 6:
      return "mn";
    break;

    case 7:
      return "prs";
    break;

    case 8:
      return "tuv";
    break;

    case 9:
      return "wxy";
    break;

    case 0:
      return "oqz";
    break;

  }
  return NULL;
}

int main (){

  char **dicionario;
  char *numero;
  int qtd, i, j;
  
  while (true)
  {
    numero = (char *)malloc(sizeof(char)*100);
    scanf("%s", numero);
    if(strcmp(numero, "-1") == 0)
    {
      break;
    }

    scanf("%i",&qtd);
    dicionario = (char **) malloc(sizeof(char *) * qtd);

    for (i = 0; i < qtd;i++){

      dicionario[i] = (char *) malloc(sizeof(char) * 50);
      scanf("%s", dicionario[i]);

    }
    //COMEÇA AQUI, CODE:

    for (i = 0; i < qtd; i++)
    {
      for (j = 0; j < strlen(dicionario[i]); j++)
      {
        for(k = 0; numero[k] != "\0"; k++)
        {
          if(strchr(letras((int)numero[k]),dicionario[i][j]) == NULL)
          {
            i++;
            j = 0;
            break;
          }
        }  
      }
    }
    

    //TERMINA AQUI
    for (i = 0; i < qtd;i++){
      free(dicionario[i]);
    }
    free(dicionario);
  }

  return 0;
}