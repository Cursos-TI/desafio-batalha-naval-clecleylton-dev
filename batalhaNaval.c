#include <stdio.h>

#define TAM 10

int main() {
    int tabuleiro[TAM][TAM];

    // 1. Zerar o tabuleiro
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // 2. Posicionamento dos Navios (Mantendo suas coordenadas do nível aventureiro)
    tabuleiro[4][1] = 3; tabuleiro[4][2] = 3; tabuleiro[4][3] = 3; // Horizontal
    tabuleiro[5][8] = 3; tabuleiro[6][8] = 3; tabuleiro[7][8] = 3; // Vertical
    tabuleiro[0][0] = 3; tabuleiro[1][1] = 3; tabuleiro[2][2] = 3; // Diagonal 1
    tabuleiro[0][9] = 3; tabuleiro[1][8] = 3; tabuleiro[2][7] = 3; // Diagonal 2

    // 3. EXIBIÇÃO COM COORDENADAS COMPLETAS
    printf("     A B C D E F G H I J\n"); // Letras no topo (Horizontal)

    for (int i = 0; i < TAM; i++) {
        // AQUI ESTÁ A MARCAÇÃO VERTICAL:
        // O "%d" imprime o número da linha (0, 1, 2...). 
        // Os espaços depois dele alinham o tabuleiro com as letras lá de cima.
        printf("%d    ", i); 

        for (int j = 0; j < TAM; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n"); // Pula para a próxima linha
    }

    return 0;
}
