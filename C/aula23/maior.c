#include <stdio.h>

int main(){
    int num1, num2, maior;

    printf("Digite o primeiro valor: ");
    scanf("%i", &num1);
    printf("Digite o segundo valor: ");
    scanf("%i", &num2);

    num1 > num2 ? (maior = num1): (maior = num2);

    printf("O maior numero e: %i", maior);

    return 0;
}