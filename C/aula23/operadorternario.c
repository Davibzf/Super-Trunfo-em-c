#include <stdio.h>

int main(){
    int idade;
    char* resultado;

    printf("Qual e a sua idade: ");
    scanf("%i", &idade);
    printf("\n");

    resultado = (idade > 18)? "Verdadeiro": "Falso";
// recebe o valor = condicao ? condicao verdadeira : condicao falsa

    printf("O resultado e: %s", resultado);

}