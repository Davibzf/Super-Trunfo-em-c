#include <stdio.h>


int main(){
    int i,j;
    char letra;

    //Loop externo
    for(i=1;i<6;i++){
        //Reset
        letra = 'A';
        
        //Loop interno
        for(j=1;j<=i;j++){
            //Impresao da letra
            printf("%s ", &letra);
            //Incrementaçao na variavel letra
            ++letra;
        }
        //Quebra de linha para reinicio do loop externo
        printf("\n");
    }
}