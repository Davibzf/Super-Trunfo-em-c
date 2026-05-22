#include <stdio.h>

int main(){
    int index;
    char * nomesAlunos[3][3] = {
        {"Aluno 1", "Pt: 30", "Mat: 98"},
        {"Aluno 2", "Pt: 60", "Mat: 60"},
        ("Aluno 3", "Pt: 90", "Mat: 30")
    };

    printf("Digite o numero do aluno de 0 a 2 que queira ver as notas: ");
    scanf("%i", &index);
    printf("As notas do %s: %s e %s",nomesAlunos[index][0],nomesAlunos[index][1],nomesAlunos[index][2]);
}