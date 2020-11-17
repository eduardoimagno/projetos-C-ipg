#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//somar digitos de nuneros entre 100 e 900
// dividir por 10 e pegar o resto

int main () {
    int numero, digito, soma ;
    printf("Qual o valor entre 100 e 900 que deseja a soma dos algarismos ? ");
    scanf("%d", &numero);

    //primeiro digito
    soma = 0;
    digito = numero %10 ;
    soma = soma + digito;
    
    //segundo digito
    numero = numero / 10 ;
    digito = numero %10;
    soma = soma + digito;

    //terceiro digito
    numero = numero /10 ;
    digito = numero %10 ;
    soma = soma + digito;


    numero = numero /10;

    printf("o valor da soma entre os digitos e %d", soma) ;
    




}