#include <stdio.h>
#include <windows.h>

int main() {
    int idade, matricula;
    float altura;
    char nome[50];
    
    printf("Digite seu nome: ");
    scanf("%s", nome);
    
    printf("\nDigite sua matrivula: ");
    scanf("%d", &matricula);

    printf("\nDigite sua idade: ");
    scanf("%d", &idade);

    printf("\nDigite sua altura: ");
    scanf("%f", &altura);


    printf("Cadastro do Aluno:\n");
    printf("Nome: %s\n", nome);
    printf("Matrícula: %d\n", matricula);
    printf("Idade: %d\n", idade);
    printf("Altura: %.2f\n", altura);
    
    Sleep(5000);
    
    return 0;
}