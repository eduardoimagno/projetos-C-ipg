#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

   int numero, digito, numeroinvertido, numero_original ;
    printf("Qual o valor entre 100 e 900 que deseja inverter os digitos ? ");
    scanf("%d", &numero);


    numero_original = numero

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

    if (numero == numeroinvertido)
    {
        printf("O numero e capicua"numero_original);
    } else {
        printf("O numero nao e capicua"numero_original);
    }
    

    printf("%d", numeroinvertido);

   return 0;

}
