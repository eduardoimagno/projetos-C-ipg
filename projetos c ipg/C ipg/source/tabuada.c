#include <stdio.h>

int main (){
    int tabuada, somador, resultado;

    printf("De qual numero deseja a tabuada? ");
    scanf("%d", &tabuada);

    for(somador=1;somador<=10;somador++){
        
        printf("%d x %d = %d \n",somador,tabuada,resultado);
    }

    somador = 1;

    do{ 
        printf("%d x %d = %d \n", somador, tabuada, somador*tabuada);
        somador++;
        
    } while (somador<=10);

    somador = 1;

    while (somador <=10)
    {
        printf("%d x %d = %d \n", somador, tabuada, somador*tabuada);
        somador++;
    }
    

    return 0;
    }