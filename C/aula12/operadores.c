#include <stdio.h>

int main() {
    int num1 = 3, num2 = 5, num3 = 5, num4 = 4, num5 = 5;

    //usando maior que> ou menor que< 
    printf(" num1 e maior que num2 a resposta e: %i\n", (num1>num2));
    //usando o == para comparar se sao igual
    printf(" num2 e igual o num3 a resposta e: %i\n", (num2==num3));
    //usando o ! para comprar se sao diferentes
    printf(" num1 e diferente do num4 a resposta e: %i\n", (num1!=num4));
    //usando && como operador lógico E (AND)
    printf(" num3 e igual ao num2 e num5: %i\n", (num3==num2)&&(num2==num5));
}