#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){

    int nota ;

    printf(" Por favor insira a nota [0 ate 100]: ");
    scanf("%d", &nota);
    
    if (nota > 0 && nota <= 45){

        printf("Cliente nao satisfeito ");

    } else if (nota > 45 && nota <= 55){

        printf("Cliente pouco satisfeito");

    } else if (nota > 55 && nota <= 75){

        printf("Cliente satisfeito");

    } else if (nota > 75 && nota <= 85){

        printf("Bom");

    } else if (nota >85 && nota <= 100){

        printf("Muito bom");
        
    } else if (nota < 0 || nota > 100){

        printf(" Lamentamos mas voce inseriu um valor invalido, a nota deve ser de 0 a 100.");

    }
    
    
    return 0 ;}