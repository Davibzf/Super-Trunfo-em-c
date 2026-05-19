#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int jogador, computador;

    srand(time(NULL));

    printf("====JOKEPO====\n");
    printf("1. Pedra\n");
    printf("2. Papel\n");
    printf("3. Tesoura\n");

    printf("Escolha uma das opcao: ");
    scanf("%i", &jogador);
    printf("\n");


    computador = rand() % 3 + 1;

    switch(jogador){
        case 1:
            printf("Jogador: Pedra - ");
        break;
        case 2:
            printf("Jogador: Papel - ");
        break;
        case 3:
            printf("Jogador: Tesoura - ");
        break;
        default:
            printf("Opcao invalida!");
    }

    switch(computador){
        case 1:
            printf("Computador: Pedra");
        break;
        case 2:
            printf("Computador: Papel");
        break;
        case 3:
            printf("Computador: Tesoura");
        break;
        default:
            printf("Opcao invalida!");
    }
}