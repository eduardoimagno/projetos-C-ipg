#include <stdio.h>

int main(){
      int data, ano, mes,dia;

      printf("Escreva a data no formato ddmmaaaa: ");
      scanf("%d",&data);

      ano=data%10000;
      data/=10000;
      mes=data%100;
      data/=100;
      dia=data%100;
   switch( mes ) {
 case 1:  printf("%d/janeiro/%i",dia,ano  )            ;break;
 case 2:  printf("%d/fevereiro/%i",dia,ano)            ;break;
 case 3:  printf("%d/março/%i",dia,ano)                ;break;
 case 4:  printf("%d/abril/%i",dia,ano)                ;break;
 case 5:  printf("%d/maio/%i",dia,ano)                 ;break;
 case 6:  printf("%d/junho/%i",dia,ano)                ;break;
 case 7:  printf("%d/julho/%i",dia,ano)                ;break;
 case 8:  printf("%d/agosto/%i",dia,ano)               ;break;
 case 9:  printf("%d/setembro/%i",dia,ano)             ;break; 
 case 10: printf("%d/outubro/%i",dia,ano)              ;break;
 case 11: printf("%d/novembro/%i",dia,ano)             ;break;
 case 12: printf("%d/dezembro/%i",dia,ano)             ;break;
}

    return 0;
}