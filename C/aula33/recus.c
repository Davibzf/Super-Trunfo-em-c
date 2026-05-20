#include <stdio.h>


void recusivoint(int n){
    if(n>0){
        printf("n = %i\n", n);
        recusivoint(n-1);
    }
}

int main() {
    int numero = 5;

    printf("Contagem regresiva: \n");
    recusivoint(numero);
}
