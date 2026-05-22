#include <stdio.h>


int main(){
    int tabuleiro[10][10] = {
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0}
    };


    tabuleiro[2][5] = 3;
    tabuleiro[3][5] = 3;
    tabuleiro[4][5] = 3;
    tabuleiro[7][2] = 3;
    tabuleiro[7][3] = 3;
    tabuleiro[7][4] = 3;

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