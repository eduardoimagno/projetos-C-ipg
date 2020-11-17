#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

   int numero, digito, numeroinvertido ;
    printf("Qual o valor entre 100 e 900 que deseja inverter os digitos ? ");
    scanf("%d", &numero);

   //primeiro digito
   numeroinvertido = 0;
   digito = numero %10 ;
   numeroinvertido = numeroinvertido * 10 + digito;
   
    
   //segundo digito
   numero = numero / 10 ;
   digito = numero %10;
   numeroinvertido = numeroinvertido * 10 + digito;

   //terceiro digito
   numero = numero /10 ;
   digito = numero %10 ;
   numeroinvertido = numeroinvertido * 10 + digito;


    printf("%d", numeroinvertido);

   return 0;

}
