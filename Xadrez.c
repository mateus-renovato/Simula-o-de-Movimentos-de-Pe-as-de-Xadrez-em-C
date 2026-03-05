#include <stdio.h>


void moverTorre(int casas) {
    if (casas == 0) {
        return;
    }

    printf("Direita\n");
    moverTorre(casas - 1);
}


void moverBispo(int casas) {
    if (casas == 0) {
        return;
    }

    printf("Cima\n");
    printf("Direita\n");

    moverBispo(casas - 1);
}


void moverRainha(int casas) {
    if (casas == 0) {
        return;
    }

    printf("Esquerda\n");
    moverRainha(casas - 1);
}


void moverCavalo() {
    printf("\nMovimento do Cavalo (2 casas para cima e 1 para a direita):\n");

    for (int i = 0; i < 2; i++) {
        printf("Cima\n");
    }

    printf("Direita\n");
}

int main() {

    printf("Movimento da Torre (5 casas para a direita):\n");
    moverTorre(5);

    printf("\nMovimento do Bispo (5 casas na diagonal para cima e direita):\n");
    moverBispo(5);

    printf("\nMovimento da Rainha (8 casas para a esquerda):\n");
    moverRainha(8);

    moverCavalo();

    return 0;
}