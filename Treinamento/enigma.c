#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LETRAS 10000

int main()
{  
    char *cifrada;
    char *crib;
    int tamCifrada;
    int tamCrib;    
    int i, j;
    int posCrib;
    int controle;
    
    while(1)
    {
        posCrib = 0;
        cifrada = (char*) malloc(MAX_LETRAS); 
        crib = (char*) malloc(MAX_LETRAS);
        
        if(scanf("%s", cifrada) == 0)
            break;

        scanf(" %s", crib);


        tamCifrada = strlen(cifrada);
        tamCrib = strlen(crib);

        for(i = 0; i<(tamCifrada-tamCrib) ; i++)
        {
            controle = 1;
            for(j = 0; j<tamCrib ; j++)
            {
                if(cifrada[i+j] == crib[j])
                {
                    controle = 0;
                    break;
                }
            }
            if (controle == 1)
            {
                posCrib++;
            }
        }
        
        printf("%d\n", posCrib);

        free(crib);
        free(cifrada);
    }

    return 0;
}