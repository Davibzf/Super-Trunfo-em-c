#include <stdio.h>

int main() {
    char nome[100];
    int idade;
    float altura;
    char sexo[10];
    char cidade[100];

    printf("Digite seu nome: ");
    scanf("%s", nome);

    printf("Digite sua idade: ");
    scanf("%d", &idade);
    
    printf("Digite a sua altura: ");
    scanf("%f", &altura);

    printf("Digite seu sexo: ");
    scanf("%s", sexo);

    printf("Digite a cidade onde mora: ");
    scanf("%s", cidade);
    
    printf("O seu nome é %s.\nTem %i anos\nSua altura é %.2f\nSeu sexo é %s\nMora em %s", nome, idade, altura, sexo, cidade);
    return 0;
}