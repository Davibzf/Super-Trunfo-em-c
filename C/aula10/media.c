#include <stdio.h>
#include <windows.h>

int main(){
    int nota1, nota2, nota3;
    float media;

    printf("Digite a primeira nota: \n");
    scanf("%d", &nota1);

    printf("Digite a sugunda nota: \n");
    scanf("%d", &nota2);

    printf("Digite a terceira nota: \n");
    scanf("%d", &nota3);

    media = (float)(nota1 + nota2 + nota3) /3 ;

    printf("A Média do aluno foi: %.2f", media);

    Sleep(5000);

    return 0;
}