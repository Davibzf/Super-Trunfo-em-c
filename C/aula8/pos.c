#include <stdio.h>

int main(){

    int resultado, numero1 = 1, numero2 = 2;

    printf("numero1: %d\n", numero1);
    
    // resultado recebe numero1             { resultado = numero1}
    // depois numero1 recebe o incremento   { numero1 = numero1 + 1}
    resultado = numero1++;

    printf("resultado: %d e numero1: %d", resultado, numero1);

    printf("numero2: %d\n", numero2);
    
    // resultado recebe numero2             { resultado = numero2}
    // depois numero2 recebe o decremento   { numero2 = numero2 - 1}
    resultado = numero2--;

    printf("resultado: %d e numero1: %d", resultado, numero2);
}