#include <stdio.h>

int main(){
    int resultado;

    resultado = 10;
    printf("Antes da atribuição: %d\n", resultado);

    // o uso do += subititue eu escrever:{ resultado = resultado + 30 }
    resultado += 30;
    printf("Depois da atribuição: %d", resultado);

}