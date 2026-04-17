#include <stdio.h>

int main(){
    //Declaração de variaveis 
    signed long int PopulacaoA, PopulacaoB;
    float PIBA, PIBB, AreaA, AreaB, PIBPERA, PIBPERB, DensidadeA, DensidadeB;
    int PontosA, PontosB;
    float SuperPoderA, SuperPoderB;

    //Informaçoes da carta 1
    printf("Digite a População da carta 1:\n  ");
    scanf("%ld", &PopulacaoA);

    printf("Digite a Área da carta 1:\n ");
    scanf("%f", &AreaA);

    printf("Digite o PIB per Capita da carta 1:\n ");
    scanf("%f", &PIBA);

    printf("Digite a quantidade de Pontos Turísticos da carta 1:\n ");
    scanf("%d", &PontosA);

    //Informaçoes da carta 2
    printf("Digite a População da carta 2:\n  ");
    scanf("%ld", &PopulacaoB);

    printf("Digite a Área da carta 2:\n ");
    scanf("%f", &AreaB);

    printf("Digite o PIB per Capita da carta 2:\n ");
    scanf("%f", &PIBB);

    printf("Digite a quantidade de Pontos Turísticos da carta 2:\n ");
    scanf("%d", &PontosB);

    //Calculo de Densidade 
    DensidadeA = PopulacaoA/AreaA;
    DensidadeB = PopulacaoB/AreaB;
    
    //Calculo do PIB per Capita
    PIBPERA = PIBA/PopulacaoA;
    PIBPERB = PIBB/PopulacaoB;

    //Calculo do Super Poder
    SuperPoderA = PopulacaoA + AreaA + PIBA + PontosA + PIBPERA + (1/DensidadeA);
    SuperPoderB = PopulacaoA + AreaB + PIBB + PontosB + PIBPERB + (1/DensidadeB);

    //Exibiçao das informações
    printf("\n\n----------------------------\n");
    printf("Comparação de Cartas:\n");
    printf("População: Carta 1 venceu (%i)\n", (PopulacaoA>PopulacaoB));
    printf("Área: Carta 1 venceu (%i)\n", (AreaA>AreaB));
    printf("PIB: Carta 1 venceu (%i)\n", (PIBA>PIBB));
    printf("Pontos Turísticos: Carta 1 venceu (%i)\n", (PontosA>PontosB));
    printf("Densidade Populacional: Carta 2 venceu (%i)\n", (DensidadeB>DensidadeA));
    printf("PIB per Capita: Carta 1 venceu (%i)\n", (PIBPERA>PIBPERB));
    printf("Super Poder: Carta 1 venceu (%i)\n", (SuperPoderA>SuperPoderB));
}