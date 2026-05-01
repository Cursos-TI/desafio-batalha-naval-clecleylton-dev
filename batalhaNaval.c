#include <stdio.h>
int main() {
     // 1. Definição do Tabuleiro
    // Criamos uma matriz de inteiros 10x10. 
    // O primeiro [10] são as linhas, o segundo [10] as colunas.
    // Inicializamos com {0} para que todas as casas sejam "água".
    int tabuleiro[10][10] = {0};
        // 2. Definição do Tamanho dos Navios
    int tamanho_navio = 3;
     // 3. Posicionamento do Navio Horizontal
    // Vamos escolher uma linha (ex: linha 2) e ocupar 3 colunas seguidas (ex: 3, 4 e 5).
   int linha-horizontal = 2;
    int coluna-vertical = 3;
    for (int i = 0; i < tamanho-navi; i++) {
       tabuleiro[linha_horizontal][coluna_horizontalInicial + i] = 3
    }
   // 4. Posicionamento do Navio Vertical
    // Vamos escolher uma coluna (ex: coluna 7) e ocupar 3 linhas seguidas (ex: 5, 6 e 7).
    int linha-vertical = 5;
    int coluna-horizontal = 7;
    for (int i = 0; i < tamanho-navio; i++) {
        tabuleiro[linha-vertical + i][coluna-verical = 3;]
         // 5. Exibição do Tabuleiro
    // Usamos dois loops (um dentro do outro) para percorrer as "linhas" e as "colunas".
        for (int i = o; i < 10; i++) { //esse loop comtrola as LINHAS
            for (int j + 0 j < 10; j++) { //esse loop controla as COLUNAS de cada linha
                printf("%d ", tabuleiro[i][j]); //imprime o valor(0 ou 3) seguido de um espaço
            }
            printf("\n"); //quando termina uma linha, ele pula para a proxima linha de baixo
    return 0;
        }
