#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int jogador, computador, tipo;

    srand(time(0));
    //incializador biblioteca de gerador numero aleatorio
    computador = rand() % 100 + 1;
    //varivel recebe aleatorio paremetro maximo=100 e inicia 0+1 == 1 ate 100  

    printf("---------------------------------------------------\n");
    printf("Bem vindo ao jogo Maior, Menor ou igual!\n");
    printf("Voce deve escolher um numero e o tipo de comparacao.\n");
    printf("1. Maior\n");
    printf("2. Menor\n");
    printf("3. Igual\n");
    printf("Digite a opçao escolhida: ");
    scanf("%i", &tipo);
    printf("Digite o numero entre 1 ate 100: ");
    scanf("%i", &jogador);
    printf("---------------------------------------------------\n");

    switch (tipo){
        case 1:
            jogador > computador ? printf("Voce venceu!"):printf("Voce Perdeu!");
        break;
        case 2:
            jogador < computador ? printf("Voce venceu!"):printf("Voce Perdeu!");
        break;
        case 3:
            jogador == computador ? printf("Voce venceu!"):printf("Voce Perdeu!");
        break;
        default:
            printf("Tipo escolhi nao e valido!!!");
    }
    printf("\nO numero escolhido pelo jogador foi: %i, escolhido pelo computador: %i", jogador, computador);



}