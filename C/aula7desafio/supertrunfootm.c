#include <stdio.h>

void exibirCarta(char estado, char codigo, char nome[], int populacao, float area, float pib, int turistico) {
    printf("Estado: %c\n", estado);
    printf("Código da carta:  %c0%c\n", estado, codigo);
    printf("Nome da cidade: %s\n", nome);
    printf("População: %d\n", populacao);
    printf("Área: %.2fkm²\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Pontos Turísticos: %d\n", turistico);
}

int main() {
    char Estado, Estado2;
    char Codigodacarta, Codigodacarta2;
    char Nome[20], Nome2[20];
    int Populacao, Populacao2, Turistico, Turistico2;
    float Area, Area2, PIB, PIB2;
    
    printf("Digite um dos estados de A ate H: ");
    scanf(" %c", &Estado);

    printf("Digite o Código da carta de 1 ate 4: ");
    scanf(" %c", &Codigodacarta);

    printf("Digite o Nome da cidade: ");
    scanf(" %s", Nome);

    printf("Digite a População da cidade: ");
    scanf(" %d", &Populacao);

    printf("Digite a Área da cidade: ");
    scanf(" %f", &Area);

    printf("Digite o PIB da cidade: ");
    scanf(" %f", &PIB);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf(" %d", &Turistico);

    printf("Digite um dos estados de A ate H: ");
    scanf(" %c", &Estado2);

    printf("Digite o Código da carta de 1 ate 4: ");
    scanf(" %c", &Codigodacarta2);

    printf("Digite o Nome da cidade: ");
    scanf(" %s", Nome2);

    printf("Digite a População da cidade: ");
    scanf(" %d", &Populacao2);

    printf("Digite a Área da cidade: ");
    scanf(" %f", &Area2);

    printf("Digite o PIB da cidade: ");
    scanf(" %f", &PIB2);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf(" %d", &Turistico2);

    
    exibirCarta(Estado, Codigodacarta, Nome, Populacao, Area, PIB, Turistico);
    printf("\n-----------------------------\n");
    exibirCarta(Estado2, Codigodacarta2, Nome2, Populacao2, Area2, PIB2, Turistico2);
    return 0;
}