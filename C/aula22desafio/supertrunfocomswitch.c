#include <stdio.h>

int main(){
    char nome1[10], nome2[10];
    int populacao1, populacao2, turistico1, turistico2, opcao;
    float area1, area2, pib1, pib2, densidade1, densidade2;
    
    printf("Nome do país: ");
    scanf(" %s", &nome1);
    printf("\nPopulação: ");
    scanf(" %i", &populacao1);
    printf("\nArea: ");
    scanf(" %f", &area1);
    printf("\nPib: ");
    scanf(" %f", &pib1);
    printf("\nNúmero de pontos turísticos: ");
    scanf(" %i", &turistico1);
    densidade1 = populacao1/area1;

    printf("\nNome do país: ");
    scanf("%s", &nome2);
    printf("\nPopulação: ");
    scanf("%i", &populacao2);
    printf("\nArea: ");
    scanf("%f", &area2);
    printf("\nPib: ");
    scanf("%f", &pib2);
    printf("\nNúmero de pontos turísticos: ");
    scanf("%i", &turistico2);
    densidade2 = populacao2/area2;


    printf("\n----opcao-de-comparaçao----");
    printf("\n1. Comparacao de populacao");
    printf("\n2. Comparacao de area");
    printf("\n3. Comparacao de pib");
    printf("\n4. Comparacao de Número de pontos turísticos");
    printf("\n5. Comparacao de Densidade demográfica");
    printf("\nSelecione a opcao: ");
    scanf("%i", &opcao);
    printf("\n---------------------------");
    printf("\nPaís 1: %s e País 2: %s", nome1, nome2);

    switch(opcao){
        case 1:
            printf("\nTamanho populacional");  
            printf("\nPaís 1: %i e País 2: %i", populacao1, populacao2);
            if(populacao1 > populacao2) {
                printf("\nVencedror foi País 1: %s ", nome1); 
            }else if(populacao1 < populacao2){
                printf("\nVencedor foi País 2: %s ", nome2);  
            }else{
                printf("\nEmpate");
            }
        break;
        case 2:
            printf("\nÁrea territorial"); 
            printf("\nPaís 1: %i e País 2: %i", populacao1, populacao2);
            if(area1 > area2) {
                printf("\nVencedror foi País 1: %s ", nome1); 
            }else if(area1 < area2){
                printf("\nVencedor foi País 2: %s ", nome2);  
            }else{
                printf("\nEmpate");
            }
        break;
        case 3:
            printf("\nProduto interno bruto(Pib)"); 
            printf("\nPaís 1: %i e País 2: %i", populacao1, populacao2);
            if(pib1 > pib2) {
                printf("\nVencedror foi País 1: %s ", nome1); 
            }else if(pib1 < pib2){
                printf("\nVencedor foi País 2: %s ", nome2);  
            }else{
                printf("\nEmpate");
            }
        break;
        case 4:
            printf("\nNúmero de pontos turísticos"); 
            printf("\nPaís 1: %i e País 2: %i", populacao1, populacao2);
            if(turistico1 > turistico2) {
                printf("\nVencedror foi País 1: %s ", nome1); 
            }else if(turistico1 < turistico2){
                printf("\nVencedor foi País 2: %s ", nome2);  
            }else{
                printf("\nEmpate");
            }
        break;
        case 5:
            printf("\nDensidade demográfica"); 
            printf("\nPaís 1: %i e País 2: %i", populacao1, populacao2);
            if(densidade1 < densidade2) {
                printf("\nVencedror foi País 1: %s ", nome1); 
            }else if(densidade1 > densidade2){
                printf("\nVencedor foi País 2: %s ", nome2);  
            }else{
                printf("\nEmpate");
            }
        break;
        default:
            printf("\nOpcao digitada invalida!");
    }
    printf("\n---------------------------");
}