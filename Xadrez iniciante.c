#include <stdio.h>

int main()
{
    
    int bispo = 5;
    int torre = 5;
    int rainha = 8;
    
    int t=1, r=1, i=1;
    
    //cabeçalho

    printf("Desafio de Xadrez\n\n");

    // Torre

    printf("Movimentação da Torre:\n");

    for (int i = 1; i <= torre; i++) {
        printf("direita\n");
    }

    printf("A torre se moveu %d vezes para a direita\n\n", torre);

    // Bispo

    printf("Movimentação da Rainha\n");

    
    while (t <= rainha)
    {
        printf("Esquerda\n");
        t++;
    }
    
    printf("A Rainha se moveu %d vezes para a esquerda\n\n", rainha);

    // bispo

    printf("Movimentação do Bispo\n");

    do
    {
        printf("Pra cima, esquerda\n");
        r++;
    } while (r <= bispo);
    
    printf("O Bispo se moveu %d vezes\n\n", bispo);

    printf("Fim do Jogo!!");
    
}

