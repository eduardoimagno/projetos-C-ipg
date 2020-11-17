#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

    int digito, numero, resto, soma, n1,n2,n3 = 0;

    printf("Qual e o numero que deseja:");
    scanf("%d", &digito);

    digito = digito %10;
    resto = digito %2;

    if (resto == 0){

        n1 = digito;

    } else {
        n1 = 0;
    }

    digito = digito %10;
    resto = digito %2;

    if (resto == 0){
       
        n2 = digito;

    } else {

        n2 =0;
    }

    digito = digito %10;
    resto = digito %2 ;
    
    if (resto == 0 ){

        n3 = digito;

    } else {
        n3 = 0;
    }

    soma = n1+n2+n3;

    printf("a soma entre os valores sao %d  %d %d  %d ",n1,n2,n3, soma);


    




    return 0;
}