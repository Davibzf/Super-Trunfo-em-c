#include <stdio.h>
#include <windows.h>

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

    printf("\n-----------------------------\n");

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", Estado);
    printf("Código da carta:  %c0%c\n",Estado,Codigodacarta);
    printf("Nome da cidade: %s\n", Nome);
    printf("População: %d\n", Populacao);
    printf("Área: %.2fkm²\n", Area);
    printf("PIB: %.2f\n", PIB);
    printf("Pontos Turísticos: %d\n", Turistico);

    printf("\n-----------------------------\n");

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", Estado2);
    printf("Código da carta:  %c0%c\n",Estado2,Codigodacarta2);
    printf("Nome da cidade: %s\n", Nome2);
    printf("População: %d\n", Populacao2);
    printf("Área: %.2fkm²\n", Area2);
    printf("PIB: %.2f\n", PIB2);
    printf("Pontos Turísticos: %d\n", Turistico2);

    Sleep(50000);
    return 0;
}