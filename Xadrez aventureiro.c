#include <stdio.h>

int main()
{
    
    int bispo = 5;
    int torre = 5;
    int rainha = 8;
    int baixo = 2;
    int esquerda = 1;

    int t=1, r=1, i=1;

    //cabeçalho

    printf("Desafio de Xadrez\n");

    // Torre

    printf("Movimentação da Torre:\n");

    for (int i = 1; i <= torre; i++) {
        printf("direita\n");
    }

    printf("A torre se moveu %d vezes para a direita\n", torre);

    // Bispo

    printf("Movimentação da Rainha\n");

    
    while (t <= rainha)
    {
        printf("Esquerda\n");
        t++;
    }
    
    printf("A Rainha se moveu %d vezes para a esquerda\n", rainha);

    // bispo

    printf("Movimentação do Bispo\n");

    do
    {
        printf("Pra cima, esquerda\n");
        r++;
    } while (r <= bispo);
    
    printf("O Bispo se moveu %d vezes\n\n", bispo);

    // Cavalo

    printf("Movimentação do Cavalo\n");

    for (i = 1; i <= baixo; i++)
    {
        printf("baixo\n");
        if (i == baixo){

            int j = 1;
            while (j <= esquerda)
            {
                printf("Esquerda\n");
                j++;
            }
        }
    }
    
    printf("O Cavalo se moveu %d casas para baixo e %d para a esquerda\n\n", baixo, esquerda);

    printf("Fim do Jogo!!");
    




    
    





}
