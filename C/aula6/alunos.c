#include <stdio.h>
#include <windows.h>

int main() {
    int idade, matricula;
    float altura;
    char nome[50];
    
    printf("Digite seu nome: \n");
    scanf("%s", nome);
    
    printf("Digite sua matrivula: \n");
    scanf("%d", &matricula);

    printf("Digite sua idade:\n ");
    scanf("%d", &idade);

    printf("Digite sua altura: \n ");
    scanf("%f", &altura);


    printf("Cadastro do Aluno:\n");
    printf("Nome: %s\n", nome);
    printf("Matrícula: %d\n", matricula);
    printf("Idade: %d\n", idade);
    printf("Altura: %.2f\n", altura);
    
    Sleep(5000);
    
    return 0;
}