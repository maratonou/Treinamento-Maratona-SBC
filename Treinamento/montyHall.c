/*Maratona de Programação da SBC – ACM ICPC – 2018
5
Problema D
Desvendando Monty Hall
No palco de um programa de auditório há três portas fechadas: porta 1, porta 2 e porta 3. Atrás de
uma dessas portas há um carro, atrás de cada uma das outras duas portas há um bode. A produção do
programa sorteia aleatoriamente a porta onde vai estar o carro, sem trapaça. Somente o apresentador
do programa sabe onde está o carro. Ele pede para o jogador escolher uma das portas. Veja que agora,
como só há um carro, atrás de pelo menos uma entre as duas portas que o jogador não escolheu, tem
que haver um bode!*/

#include <stdio.h>

int main()
{   
    int n, i, ganhou, carro;

    while(scanf("%d", &n))
    {
        ganhou = 0;
        for(i = 0; i < n; i++)
        {
            scanf("%d", &carro);
        
            if(carro != 1)
              ganhou++;
        }
        printf("%d\n", ganhou);
    }

    return 0;
}