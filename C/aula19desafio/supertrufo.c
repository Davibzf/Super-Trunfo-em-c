#include <stdio.h>

int main() {
    //Declarar variaveis
    char Estado[10], Estado2[10];
    char Codigodacarta[10], Codigodacarta2[10];
    char Nome[50], Nome2[50];
    unsigned int Populacao, Populacao2, Pontosturist, Pontosturist2;
    float Area, Area2, PIB, PIB2, Densidade, Densidade2, PIBP, PIBP2;
    int opcao;

    //Informaçoes da primeira carta
    printf("Qual e o estado: {ex:SP}\n");
    scanf("%9s", Estado);
    printf("Qual e o codigo da carta: {ex:04}\n");
    scanf("%9s", Codigodacarta);
    printf("Qual e o nome da carta: {ex:Fortaleza}\n");
    scanf("%49s", Nome);
    printf("Qual e a quantidade populacional:\n");
    scanf("%u", &Populacao);
    printf("Qual e a Area:\n");
    scanf("%f", &Area);
    printf("Qual e o PIB:\n");
    scanf("%f", &PIB);
    printf("Quantos pontos turisticos:\n");
    scanf("%u", &Pontosturist);

    //Informaçoes da segunda carta
    printf("Qual e o estado: {ex:SP}\n");
    scanf("%9s", Estado2);
    printf("Qual e o codigo da carta: {ex:04}\n");
    scanf("%9s", Codigodacarta2);
    printf("Qual e o nome da carta: {ex:Fortaleza}\n");
    scanf("%49s", Nome2);
    printf("Qual e a quantidade populacional:\n");
    scanf("%u", &Populacao2);
    printf("Qual e a Area:\n");
    scanf("%f", &Area2);
    printf("Qual e o PIB:\n");
    scanf("%f", &PIB2);
    printf("Quantos pontos turisticos:\n");
    scanf("%u", &Pontosturist2);

    //Calcular PIB per Capita
    PIBP = PIB/Populacao;
    PIBP2 = PIB2/Populacao2;

    //Calcular Densidade populacional
    Densidade = Populacao/Area;
    Densidade2 = Populacao2/Area2;

    printf("Carta 1 - %s(%s): %u\nCarta 2 - %s(%s): %u\n", Nome, Estado, Populacao, Nome2, Estado2, Populacao2);
    if(Populacao>Populacao2){
        printf("Resultado: Carta 1 ganhou");
    }else if(Populacao<Populacao2) {
        printf("Resultado: Carta 2 ganhou");
    }else{
        printf("Resultado: Empate");
    }
}