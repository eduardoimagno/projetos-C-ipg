#include <stdio.h>

int main (){
    int tabuada, somador, resultado;

    printf("De qual numero deseja a tabuada? ");
    scanf("%d", &tabuada);    

    somador = 1;

    do{ 
        printf(" %d x %d = %d \n", somador, tabuada, somador*tabuada);
        somador++;
        
    } while (somador<=10);
    

    return 0;
    }