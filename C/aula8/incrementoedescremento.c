#include <stdio.h>

int main(){
    int resultado;

    resultado = 10;
    printf("Antes de incrementar: %d\n", resultado);

    // resultado = resultado + 1
    //resultado += 1
    resultado ++;//  o uso de dois sinal ++ . faz com que aumente 1 unidade
    printf("Depois de incrementar: %d\n", resultado);

     // resultado = resultado - 1
    //resultado -= 1
    resultado --; //  o uso de dois sinal -- . faz com que diminua 1 unidade
    printf("Agora com a decrementação: %d", resultado);
}