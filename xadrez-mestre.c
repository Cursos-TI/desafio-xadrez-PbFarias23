#include <stdio.h>

int movimentoBispo = 5;
int movimentoTorre = 5;
int movimentoRainha = 8;
int movimentoCavaloCima = 2;
int movimentoCavaloDireita = 1;

void torre(int passo, int limite){
    if (passo>limite) return;
    printf("Direita\n");
    torre(passo + 1, limite);
}

int main(){


    return 0;
}