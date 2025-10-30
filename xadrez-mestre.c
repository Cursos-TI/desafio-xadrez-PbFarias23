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

void bispo(int vertical, int limitevertical, int limitehorizontal){
    if(vertical = limitevertical) return;

    for (int horizontal = 1; horizontal <= limitehorizontal; horizontal ++){
        printf("Direita\n");
    }
    printf("cima\n");

    bispo(vertical + 1, limitevertical, limitehorizontal);
}

void cavalo(int cima, int direita){
    printf("Movimentação do Cavalo: \n");

    for (int i=1, j=0; i<= cima; i++, J++){
        if(i==2){
            for(int k = 1; k <= direita; k++){
                if(k==1){
                    printf("Direita\n");
                    break;
                }         
            }
        } else {
            if (i == 1) {
                printf("Xima\n");
                continue;
            }
        }
        printf("Cima\n");
    }
    printf("O cavalo se moveu %d casas para cima e%d para a direita\n\n", cima, direita);
}







int main(){


    return 0;
}