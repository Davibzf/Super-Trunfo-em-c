#include <stdio.h>

int main(){
    int temperatura;
    char* estado;

    printf("Digite a temperatura atual: ");
    scanf("%i", temperatura);

    estado = (temperatura > 30)? "Calor":"Frio";

    printf("O estado da temperatura e: %s", estado);

    return 0;
}