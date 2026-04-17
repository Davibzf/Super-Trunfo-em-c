#include <stdio.h>

int main() {
    // Declarar as variaveis
    //Nome dos Produtos
    char ProdutoA[30] = "ProdutoA";
    char ProdutoB[30] = "ProdutoB";
    //Número de Produtos em estoque
    unsigned int EstoqueA = 1000;
    unsigned int EstoqueB = 2000;
    //Valor unitario dos Produtos
    float ValorA = 10.50;
    float ValorB = 20.40;
    //O Estoque previsto minimo
    unsigned int EstoqueMinimoA = 500;
    unsigned int EstoqueMinimoB = 2500;
    //Valor do montande em produto
    double ValorTotalA;
    double ValorTotalB;
    //Compração se a estoque minimo no momento 
    int ResultadoA, ResultadoB;

    //Exibição de informaçoes
    printf("%s tem estoque %u e o valor unitario e de R$ %.2f\n", ProdutoA, EstoqueA, ValorA);
    printf("%s tem estoque %u e o valor unitario e de R$ %.2f\n", ProdutoB, EstoqueB, ValorB);

    //Comprações com o valores minimo de estoque
    ResultadoA = EstoqueA > EstoqueMinimoA;
    ResultadoB = EstoqueB > EstoqueMinimoB;

    //Exibir as infomaçoes sobre o estoque
    printf("O %s tem estoque minimo: %d {S=1/N=0}\n",ProdutoA, ResultadoA);
    printf("O %s tem estoque minimo: %d {S=1/N=0}\n",ProdutoA, ResultadoB);

    //Comparaçao entre os valores totais dos produtos
    ValorTotalA = EstoqueA * ValorA;
    ValorTotalB = EstoqueB * ValorB;
    //Exibir valores totais dos produtos
    printf("O valor total de A: %.2f\n", ValorTotalA);
    printf("O valor total de B: %.2f\n", ValorTotalB);

}