#include <stdio.h>

int main() {
    // Declarar as variaveis

    char ProdutoA[30] = "Produto A";
    char ProdutoB[30] = "Produto B";

    unsigned int EstoqueA = 1000;
    unsigned int EstoqueB = 2000;
    
    float ValorA = 10.50;
    float ValorB = 20.40;

    unsigned int EstoqueMinimoA = 500;
    unsigned int EstoqueMinimoB = 2500;

    double ValorTotalA;
    double ValorTotalB;
 
    // Exibição de informaçoes
    printf("%s tem estoque %u e o valor unitario de %.2f ", ProdutoA, EstoqueA, ValorA);
    printf("%s tem estoque %u e o valor unitario de %.2f ", ProdutoB, );
}