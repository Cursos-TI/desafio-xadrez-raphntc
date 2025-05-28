#include <stdio.h>

int main() {
    // Número de casas para cada movimento (pode ser alterado conforme necessário)
    int movimentoTorre = 5;
    int movimentoBispo = 5;
    int movimentoRainha = 8;

    // Movimento da Torre: 5 casas para a direita (utilizando for)
    printf("Movimento da Torre:\n");
    for (int i = 0; i < movimentoTorre; i++) {
        printf("Direita\n");
    }

    // Movimento do Bispo: 5 casas na diagonal (utilizando while)
    printf("\nMovimento do Bispo:\n");
    int i = 0;
    while (i < movimentoBispo) {
        printf("Cima Direita\n");
        i++;
    }

    // Movimento da Rainha: 8 casas para a esquerda (utilizando do-while)
    printf("\nMovimento da Rainha:\n");
    int j = 0;
    do {
        printf("Esquerda\n");
        j++;
    } while (j < movimentoRainha);

    return 0;
}
