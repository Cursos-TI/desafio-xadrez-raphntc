#include <stdio.h>

// -----------------------------
// Função recursiva para Torre
// -----------------------------
void moverTorre(int casasRestantes) {
    if (casasRestantes == 0) return;
    printf("Direita\n");
    moverTorre(casasRestantes - 1);
}

// ----------------------------------
// Função recursiva + loops para Bispo
// ----------------------------------
void moverBispo(int casasVerticais, int casasHorizontais) {
    if (casasVerticais == 0 || casasHorizontais == 0) return;

    for (int i = 0; i < casasVerticais; i++) {
        for (int j = 0; j < casasHorizontais; j++) {
            printf("Cima Direita\n");
        }
    }

    moverBispo(casasVerticais - 1, casasHorizontais - 1); // chamada recursiva reduzindo os passos
}

// -----------------------------
// Função recursiva para Rainha
// -----------------------------
void moverRainha(int casasRestantes) {
    if (casasRestantes == 0) return;
    printf("Esquerda\n");
    moverRainha(casasRestantes - 1);
}

// --------------------------------------------
// Movimento do Cavalo com loops aninhados complexos
// --------------------------------------------
void moverCavalo() {
    printf("\nMovimento do Cavalo:\n");

    int movimentos = 1; // Número de movimentos "L"
    for (int l = 0; l < movimentos; l++) {
        int i = 0, j = 0;
        for (i = 0; i < 3; i++) { // Loop vertical
            if (i == 2) break;    // Faz duas casas para cima
            printf("Cima\n");
        }

        while (j < 2) { // Loop horizontal
            j++;
            if (j == 2) break; // Apenas 1 casa para direita
            if (j % 2 == 0) continue; // Controle de fluxo para exemplo
            printf("Direita\n");
        }
    }
}

// -----------------------------
// Função principal
// -----------------------------
int main() {
    // ----------------------
    // Torre (Recursiva)
    // ----------------------
    printf("Movimento da Torre:\n");
    moverTorre(5);

    // ----------------------
    // Bispo (Recursiva + Loops Aninhados)
    // ----------------------
    printf("\nMovimento do Bispo:\n");
    moverBispo(1, 5); // 1 movimento recursivo com 5 passos internos

    // ----------------------
    // Rainha (Recursiva)
    // ----------------------
    printf("\nMovimento da Rainha:\n");
    moverRainha(8);

    // ----------------------
    // Cavalo (Loops Aninhados Complexos)
    // ----------------------
    moverCavalo();

    return 0;
}
