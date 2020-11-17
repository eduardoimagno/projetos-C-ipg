#include <stdio.h>

int main (){
    	int somador, tabuada = 1;
        do{
            printf("de qual numero entre 10 e 20 voce deseja a tabuda? ");
            scanf("%d",&tabuada);
        }while(tabuada<10 || tabuada>20); 

        somador = 1;
        do{ 
            printf(" %d x %d = %d \n ",somador,tabuada, somador*tabuada);
            somador++;
        }while( somador<=10 );

    return 0;
}