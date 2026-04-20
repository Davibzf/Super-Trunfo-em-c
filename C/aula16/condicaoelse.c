#include <stdio.h>

int main() {
    int comando1=0, comando2=0;

    printf("Digite o primeiro Número: ");
    scanf("%i", &comando1);

    printf("\nDigite o segundo Número: ");
    scanf("%i", &comando2);



    if (comando1>comando2) {
        printf("\nO Número 1 e maior que o número 2");
    }else if (comando1<comando2){
        printf("\nO Número 2 e maior que o número 1");
    }else {
        printf("\nOs Números sao iguais");
    }
}