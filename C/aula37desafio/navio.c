#include <stdio.h>

#define LINHAS 10
#define COLUNAS 10

int main(){
    int tabuleiro[LINHAS][COLUNAS];

    for(int i = 0; i < LINHAS; i++){
        for(int j = 0; j < COLUNAS; j++){
            tabuleiro[i][j] = 0;
        }
    }


    tabuleiro[2][5] = 3;
    tabuleiro[3][5] = 3;
    tabuleiro[4][5] = 3;
    tabuleiro[7][2] = 3;
    tabuleiro[7][3] = 3;
    tabuleiro[7][4] = 3;
    tabuleiro[5][1] = 3;
    tabuleiro[4][2] = 3;
    tabuleiro[3][3] = 3;
    tabuleiro[8][8] = 3;
    tabuleiro[7][7] = 3;
    tabuleiro[6][6] = 3;

    printf("Tabuleiro batalha naval\n");
    printf("   A B C D E F G H I J\n");
    for(int i = 0; i < 10; i++){
        printf(" %i", i+1);
        for(int j = 0; j < 10; j++){
            printf(" %i", tabuleiro[i][j]);
        }
        printf("\n");
    }
}