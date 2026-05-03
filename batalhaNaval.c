#include <stdio.h> // bibliotecas
#define TAM 10 // constantes
// funções (opcionais) auxiliares
int main(){
int tabuleiro[TAM][TAM];
// mostrar tabuleiro
for (int i = 0; i < TAM; i++) {
for (int j = 0; j < TAM; j++) {
     tabuleiro[i][j] = 0;
}
}
// posicionamentos dos navios.
//navio horizontal
    tabuleiro[2][1] = 3;
    tabuleiro[2][2] = 3;
    tabuleiro[2][3] = 3;
//navil vertical
    tabuleiro[5][5] = 3;
    tabuleiro[6][5] = 3;
    tabuleiro[7][5] = 3;
// navil da diagonal (descendo)
    tabuleiro[0][0] = 3;
    tabuleiro[1][1] = 3;
    tabuleiro[2][2] = 3;
// navil da diagonal (invertida)
    tabuleiro[0][9] = 3;
    tabuleiro[1][8] = 3;
    tabuleiro[2][7] = 3;
    //tabuleiro completo (exibindo/exibir)
    printf("--- TABULEIRO BATALHA NAVAL ---\n"); //loop que percorre as LINHAS
    for (int i = 0; i <TAM; i++) { // este percorre as COLUNAS de cada linha
        for (int j = 0; j < TAM; j++) {
            printf("%d ", tabuleiro[i][j]); 
        }
        printf("\n"); // pula cada linha pós a outra de baixo
    }
    return 0;
} //final do programa (fechar).