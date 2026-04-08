#include <stdio.h>
#include <windows.h>
 
int main() {
    int num1, num2, num3, soma;
    printf("Digite o 1 numero: \n");
    scanf("%d", &num1);

    printf("Digite o 2 numero: \n");
    scanf("%d", &num2);

    printf("Digite o 3 numero: \n");
    scanf("%d", &num3);

    soma = num1 + num2 + num3;

    printf("soma de %d + %d + %d = %d", num1, num2, num3, soma);
    Sleep(5000);
    return 0;
}