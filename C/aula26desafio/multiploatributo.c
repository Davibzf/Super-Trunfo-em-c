#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int resultado1, resultado2;
    int atributo1, atributo2;
    int ataque1, ataque2, defesa1, defesa2, recuo1, recuo2;


    srand(time(0));
    ataque1 = rand() % 100 + 1;
    ataque2 = rand() % 100 + 1;
    defesa1 = rand() % 100 + 1;
    defesa2 = rand() % 100 + 1;
    recuo1 = rand() % 100 + 1;
    recuo2 = rand() % 100 + 1;


    printf("Bem-vindo ao jogo!\n");
    printf("Escolha o primeiro atributo:\n");
    printf("1. Ataque\n");
    printf("2. Defesa\n");
    printf("3. Recuo\n");

    printf("Escolha a comparacao: ");
    scanf("%i", &atributo1);

    switch(atributo1)
    {
        case 1:
            printf("Voce escolheu ataque!\n");
            resultado1 = ataque1 > ataque2 ? 1:0;
            printf("ataque1: %i e ataque2: %i\n",  ataque1, ataque2);
        break;
        case 2:
            printf("Voce escolheu defesa!\n");
            resultado1 = defesa1 > defesa2 ? 1:0;
            printf("defesa1: %i e defesa2: %i\n",  defesa1, defesa2);
        break;
        case 3:
            printf("Voce escolheu recuo!\n");
            resultado1 = recuo1 > recuo2 ? 1:0;
            printf("recuo1: %i e recuo2: %i\n",  recuo1, recuo2);
        break;
        default:
            printf("Posibilidade invalida!\n");
    }   

    printf("Escolha o segundo atributo:\n");
    printf("1. Ataque\n");
    printf("2. Defesa\n");
    printf("3. Recuo\n");

    printf("Escolha a comparacao: ");
    scanf("%i", &atributo2);

    if (atributo1 != atributo2){
        switch(atributo2)
            {
                case 1:
                    printf("Voce escolheu ataque!\n");
                    resultado2 = ataque1 > ataque2 ? 1:0;
                    printf("ataque1: %i e ataque2: %i\n",  ataque1, ataque2);
                break;
                case 2:
                    printf("Voce escolheu defesa!\n");
                    resultado2 = defesa1 > defesa2 ? 1:0;
                    printf("defesa1: %i e defesa2: %i\n",  defesa1, defesa2);
                break;
                case 3:
                    printf("Voce escolheu recuo!\n");
                    resultado2 = recuo1 > recuo2 ? 1:0;
                    printf("recuo1: %i e recuo2: %i\n",  recuo1, recuo2);
                break;
                default:
                    printf("Posibilidade invalida!\n");
            } 
    } else{
         printf("Atributo ja escolhido anteriormente!");
    }

    printf("os resultados do atributos da primeira escolha: %i e segunda escolha: %i",  resultado1, resultado2);
}