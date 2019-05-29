/*Maratona de Programação da SBC – ACM ICPC – 2018
1
Problema A
Aventurando-se no Slackline
Beltrano recentemente se interessou por slackline. Slackline é um esporte de equilíbrio sobre uma fita
elástica esticada entre dois pontos fixos, o que permite ao praticante andar e fazer manobras em cima
da fita. Durante as férias tudo que Beltrano quer fazer é praticar, e para isso ele foi para a fazenda
de um amigo, onde há uma plantação de eucaliptos.
A plantação é muito bem organizada. Os eucaliptos estão dispostos em N fileiras com M árvores
em cada. Há um espaço de um metro entre cada fileira e as árvores nas diferentes fileiras estão todas
perfeitamente alinhadas com um espaço de um metro entre elas.
Beltrano vai montar o slackline usando duas árvores. Ao montar o slackline Beltrano não gosta
que a distância entre as duas árvores seja muito pequena, já que as melhores manobras exigem que
a fita tenha pelo menos L metros. Também não é possível esticar demais a fita já que ela tem um
comprimento máximo de R metros. Note que ao esticar a fita entre as duas árvores escolhidas não
pode haver nenhuma outra árvore na linha formada, caso contrário não seria possível utilizar a fita
toda para as manobras.
Beltrano gostaria de saber de quantas formas diferentes é possível montar o slackline usando as
árvores da fazenda. Duas formas são consideradas diferentes se pelo menos uma das árvores onde a
fita foi amarrada é diferente.
Entrada
A entrada consiste de uma única linha que contém quatro inteiros, N, M, L, R, representando
respectivamente o número de linhas e colunas da plantação e os comprimentos mínimo e máximo do
slackline (1 ≤ N, M ≤ 10⁵ ; 1 ≤ L ≤ R ≤ 10⁵ ).
Saída
Seu programa deve produzir uma única linha com um inteiro representando de quantas formas
diferentes o slackline pode ser montado. Como o resultado pode ser grande, a resposta deve ser esse
número módulo 10⁹ + 7.*/

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int modulo(int a)
{
    if (a < 0)
    {
        return -a;
    }
    return a;
}
double norma(int x1, int y1, int x2, int y2)
{
    int deltaX, deltaY;
    double norma;

    deltaX = pow((x1-x2), 2);
    deltaY = pow((y1-y2), 2);

    //printf("%d %d\n", deltaX, deltaY);

    norma  = sqrt(deltaX + deltaY);

    return norma;
}
int main ()
{
    int n, m, l, r;
    int contX, contY;
    int i, j, possibilidades = 0;

    while (scanf("%d %d %d %d", &n, &m, &l, &r))
    {
        possibilidades = 0;
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
            {
                for (contX = i; contX < n; contX++)
                {
                    for (contY = 0; contY < m; contY++)
                    {
                        if (contX == i && contY <= j)
                        {
                            continue;
                        }
                        else
                        {

                            if (modulo(i-contX) == 0 && modulo(j-contY) > 1 || modulo(i-contX) > 1 && modulo(j-contY) == 0)
                            {
                                continue;
                            }
                            else if (modulo(i-contX) > 1 && modulo(i-contX) == modulo(contY- j))
                            {
                                continue;
                            }
                            else
                            {
                                if (norma(i, j, contX, contY) >= l && norma(i, j, contX, contY) <= r)
                                {
                                    printf("x = %d, y = %d\ncontX = %d, contY = %d\n", i, j, contX, contY);
                                    printf("norma %lf\n", norma(i, j, contX, contY));
                                    possibilidades++;
                                }

                            }
                        }
                    }
                }
            }
        }
        printf("%d\n", possibilidades);
    }
    return 0;
}