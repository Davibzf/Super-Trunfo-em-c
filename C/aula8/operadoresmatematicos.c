#include <stdio.h>

int main() {
    int num1, num2, soma, subtracao, multiplicacao, divisao;

    num1 = 1;
    num2 = 2;

    soma = num1 + num2;
    subtracao = num1 - num2;
    multiplicacao = num1 * num2;
    divisao = num1 / num2;

    printf("Soma: %d\n", soma);
    printf("Subitração: %d\n", subtracao);
    printf("Multiplicação: %d\n", multiplicacao);
    printf("Divisão: %d\n", divisao);
}