#include <stdio.h>

int main() {
    // Quantidade de casas para cada movimento
    int movimentoTorre = 5;
    int movimentoBispo = 5;
    int movimentoRainha = 8;

    // ---------------------------
    // Movimento da Torre (FOR)
    // ---------------------------
    printf("Movimento da Torre:\n");
    for (int i = 0; i < movimentoTorre; i++) {
        printf("Direita\n");
    }

    // ---------------------------
    // Movimento do Bispo (WHILE)
    // ---------------------------
    printf("\nMovimento do Bispo:\n");
    int i = 0;
    while (i < movimentoBispo) {
        printf("Cima Direita\n");
        i++;
    }

    // ---------------------------
    // Movimento da Rainha (DO-WHILE)
    // ---------------------------
    printf("\nMovimento da Rainha:\n");
    int j = 0;
    do {
        printf("Esquerda\n");
        j++;
    } while (j < movimentoRainha);

    // ---------------------------
    // Movimento do Cavalo (FOR + WHILE aninhado)
    // ---------------------------
    printf("\nMovimento do Cavalo:\n");

    int movimentosL = 1; // Quantas vezes o "L" será executado
    for (int k = 0; k < movimentosL; k++) {
        // Move 2 casas para baixo
        int passoBaixo = 0;
        while (passoBaixo < 2) {
            printf("Baixo\n");
            passoBaixo++;
        }

        // Move 1 casa para a esquerda
        printf("Esquerda\n");
    }

    return 0;
}
