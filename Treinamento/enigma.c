/*Maratona de Programação da SBC – ACM ICPC – 2018
7
Problema E
Enigma
Dada uma configuração inicial, a máquina de criptografia alemã Enigma, da Segunda Guerra Mundial,
substituı́a cada letra digitada no teclado por alguma outra letra. A substituição era bastante complexa,
mas a máquina tinha uma vulnerabilidade: uma letra nunca seria substituı́da por ela mesma! Essa
vulnerabilidade foi explorada por Alan Turing, que trabalhou na criptoanálise da Enigma durante
a guerra. O objetivo era encontrar a configuração inicial da máquina usando a suposição de que a
mensagem continha uma certa expressão usual da comunicação, como por exemplo a palavra ARMADA.
Essas expressões eram chamadas de cribs. Se a mensagem cifrada era, por exemplo, FDMLCRDMRALF, o
trabalho de testar as possı́veis configurações da máquina era simplificado porque a palavra ARMADA, se
estivesse nessa mensagem cifrada, só poderia estar em duas posições, ilustradas na tabela abaixo com
uma seta. As demais cinco posições não poderiam corresponder ao crib ARMADA porque ao menos uma
letra do crib, sublinhada na tabela abaixo, casa com sua correspondente na mensagem cifrada; como
a Enigma nunca substituiria uma letra por ela própria, essas cinco posições poderiam ser descartadas
nos testes.*/

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