#include <stdio.h>

int movimentoBispo = 5;
int movimentoTorre = 5;
int movimentoRainha = 8;
int movimentoCavaloCima = 2;
int movimentoCavaloDireita = 1;

//recursiva torre

void torre(int passo, int limite){
    if (passo>limite) return;
    printf("Direita\n");
    torre(passo + 1, limite);
}

//recursiva Rainha

void rainha(int passo, int limite){
    if (passo>limite) return;
    printf("esquerda\n");
    rainha(passo +1, limite);    
}

//recursiva Bispo






int main(){


    return 0;
}