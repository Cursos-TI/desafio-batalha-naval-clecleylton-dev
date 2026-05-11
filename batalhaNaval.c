#include <stdio.h>

#define TAM 10
#define TAM_HAB 5

int main() {
    int tabuleiro[TAM][TAM];
    int cone[TAM_HAB][TAM_HAB], cruz[TAM_HAB][TAM_HAB], octaedro[TAM_HAB][TAM_HAB];
    int i, j;

    // Inicializa o tabuleiro com água (0)
    for(i=0; i<TAM; i++)
        for(j=0; j<TAM; j++)
            tabuleiro[i][j] = 0;

    // POSICIONAMENTO DOS NAVIOS (Valor 3)
    tabuleiro[0][1]=3; tabuleiro[0][2]=3; tabuleiro[0][3]=3; 
    tabuleiro[0][5]=3; tabuleiro[0][6]=3; tabuleiro[0][7]=3; 
    tabuleiro[1][0]=3; tabuleiro[2][0]=3; tabuleiro[3][0]=3; 
    tabuleiro[0][9]=3; tabuleiro[1][9]=3; tabuleiro[2][9]=3; 
    tabuleiro[1][4]=3; tabuleiro[2][3]=3; tabuleiro[3][2]=3; // Diagonal 1
    tabuleiro[2][7]=3; tabuleiro[3][8]=3; tabuleiro[4][9]=3; // Diagonal 2 (Ajustada 2/H, 3/I, 4/J)

    // GERAÇÃO DINÂMICA DAS MATRIZES DE HABILIDADE (Requisito: Condicionais e Loops)
    for(i=0; i<TAM_HAB; i++){
        for(j=0; j<TAM_HAB; j++){
            cone[i][j]=0; cruz[i][j]=0; octaedro[i][j]=0;
            
            // Lógica do Cone: expande para baixo a partir do topo central
            if(i==0 && j==2) cone[i][j]=1;
            if(i==1 && j>=1 && j<=3) cone[i][j]=1;
            if(i==2 && j>=0 && j<=4) cone[i][j]=1;

            // Lógica da Cruz: preenche linha e coluna centrais
            if(i==2 || j==2) cruz[i][j]=1;

            // Lógica do Octaedro: formato de losango/diamante
            if((i==1 && j==2) || (i==2 && j>=1 && j<=3) || (i==3 && j==2)) octaedro[i][j]=1;
        }
    }

    // SOBREPOSIÇÃO NO TABULEIRO (Valor 5 para áreas afetadas)
    int ol, oc;

    // Aplicando Cone - Origem (7,2)
    ol=7; oc=2;
    for(i=0; i<TAM_HAB; i++)
        for(j=0; j<TAM_HAB; j++)
            if(cone[i][j] == 1){
                int l = ol+i-1, c = oc+j-2;
                if(l>=0 && l<TAM && c>=0 && c<TAM && tabuleiro[l][c] == 0) tabuleiro[l][c]=5;
            }

    // Aplicando Cruz - Origem (6,7)
    ol=6; oc=7;
    for(i=0; i<TAM_HAB; i++)
        for(j=0; j<TAM_HAB; j++)
            if(cruz[i][j] == 1){
                int l = ol+i-2, c = oc+j-2;
                if(l>=0 && l<TAM && c>=0 && c<TAM && tabuleiro[l][c] == 0) tabuleiro[l][c]=5;
            }

    // Aplicando Octaedro - Origem (4,4)
    ol=4; oc=4;
    for(i=0; i<TAM_HAB; i++)
        for(j=0; j<TAM_HAB; j++)
            if(octaedro[i][j] == 1){
                int l = ol+i-2, c = oc+j-2;
                if(l>=0 && l<TAM && c>=0 && c<TAM && tabuleiro[l][c] == 0) tabuleiro[l][c]=5;
            }
    // EXIBIÇÃO FINAL DO TABULEIRO
    printf("    A B C D E F G H I J\n");
    for(i=0; i<TAM; i++){
        printf("%d | ", i);
        for(j=0; j<TAM; j++){
            // Exibição amigável: Navios (3), Habilidades (5), Água (0)
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
