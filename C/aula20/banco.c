#include <stdio.h>

int main() {
    int opcao;
    float saldo , deposito, saque;

    printf("Quanto e o seu saldo:\n");
    scanf("%f", &saldo);
    printf("-----------------------------\n");
    printf("Escolha uma opcao de 1 a 3\n");
    printf("1. Verificar saldo\n");
    printf("2. Fazer deposito\n");
    printf("3. Fazer saque\n");
    scanf("%i", &opcao);

    switch(opcao) {
        case 1:
            printf("Seu saldo e: R$%f\n", saldo);
        break;
        case 2:
            printf("Quanto voce deseja depositar? ");
            scanf("%f", &deposito);
            saldo += deposito;
            printf("Seu novo saldo e: R$%f\n", saldo);
        break;
        case 3:
            printf("Quanto voce deseja sacar? ");
            scanf("%f", &saque);
            saldo -= saque;
            printf("Seu novo saldo e: R$%f\n", saldo);
        break;
        default:
            printf("Opcao invalidade tente novamente!");
    }
}