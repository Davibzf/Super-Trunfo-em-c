#include <stdio.h>

int main(){
    int opcao;
    float nota1, nota2, media;

    printf("-----------------------------------\n");
    printf("Menu de gerenciamento de estudantes\n");
    printf("1. Calcular Media\n");
    printf("2. Determinar Status\n");
    printf("3. Sair\n");
    printf("-----------------------------------\n");
    printf("Escolha uma opcao: ");
    scanf("%i", &opcao);
    printf("-----------------------------------\n");

    switch(opcao){
        case 1:
            printf("Digite a primeira nota: ");
            scanf("%f", &nota1);
            printf("Digite a segunda nota: ");
            scanf("%f", &nota2);
            media =  (nota1 + nota2) / 2;
            printf("Sua media e: %.2f !", media);
        break;
        case 2:
            printf("Digite a sua media: ");
            scanf("%f", &media);
            media >= 6 ? printf("Aprovado!"): printf("Reprovado!");
        break;
        case 3:
            printf("saindo do programa...");
        break;
        default:
            printf("Opcao invalida!");
        break;
    }



}