#include <stdio.h>

int main() {
    char nome[100];
    printf("Qual seu nome?\n");
    scanf("%s", nome);
    printf("Olá, %s! Seja bem-vindo ao mundo da programação em C!", nome);
    return 0;
}