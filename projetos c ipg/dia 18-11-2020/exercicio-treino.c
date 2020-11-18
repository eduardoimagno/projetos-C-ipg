#include <stdio.h>

int main(){
    int data,dia,mes,ano,numero, digito, mes1, mes2,numeroinvertido,dia2, dia1, ano1,ano2, ano3, ano4;
    char nomemes

    printf("Escreva a data no formato ddmmaaaa: ");
    scanf("%d",data);

    //primeiro digito
   numeroinvertido = 0;
   digito = numero %10 ;
   numeroinvertido = numeroinvertido * 10 + digito;

   dia=digito;
   
    
   //segundo digito
   numero = numero / 10 ;
   digito = numero %10;
   numeroinvertido = numeroinvertido * 10 + digito;

   dia2=digito;

   //terceiro digito
   numero = numero /10 ;
   digito = numero %10 ;
   numeroinvertido = numeroinvertido * 10 + digito;

   mes1=digito;

      //quarto digito
   numero = numero /10 ;
   digito = numero %10 ;
   numeroinvertido = numeroinvertido * 10 + digito;

   mes2 = digito;

      //quinto digito
   numero = numero /10 ;
   digito = numero %10 ;
   numeroinvertido = numeroinvertido * 10 + digito;

   ano1=digito;

      //sexto digito
   numero = numero /10 ;
   digito = numero %10 ;
   numeroinvertido = numeroinvertido * 10 + digito;

    ano2 = digito;

      //setimo digito
   numero = numero /10 ;
   digito = numero %10 ;
   numeroinvertido = numeroinvertido * 10 + digito;

   ano3 = digito;
    
    if(digito=!0){
        //oitavo digito
    numero = numero /10 ;
    digito = numero %10 ;
    numeroinvertido = numeroinvertido * 10 + digito;
    ano4=digito
    }

    ano=ano1+ano2+ano3+ano4;

    mes=mes1+mes2;

    dia=dia1+dia2;

    switch(mes){
        case (1) : strcpy(mes,"janeiro"); break;
        case (2) : strcpy(mes,"fevereiro"); break;
        case (3) : strcpy(mes,"marco"); break;
        case (4) : strcpy(mes,"abril"); break;
        case (5) : strcpy(mes,"maio"); break;
        case (6) : strcpy(mes,"junho"); break;
        case (7) : strcpy(mes,"julho"); break;
        case (8) : strcpy(mes,"agosto"); break;
        case (9) : strcpy(mes,"setembro"); break;
        case (10) : strcpy(mes,"outubro"); break;
        case (11) : strcpy(mes,"novembro"); break;
        case (12) : strcpy(mes,"dezembro"); break;
    }
        
    
    prinf("%d", data)



    return 0;
}