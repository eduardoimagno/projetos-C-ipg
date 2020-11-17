#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>


int main (){
    setlocale(LC_ALL, "Portugues");

    int valor ,notas = 0 ;
    printf("Qual o valor ? ");
    scanf("%i", &valor);

    notas = valor / 500;
    printf("notas de 500 => %d\n\n", notas);
    valor = valor % 500;

    notas = valor / 200;
    printf("notas de 200 => %d\n\n", notas);
    valor = valor % 200;

     notas = valor / 100;
    printf("notas de 100 => %d\n\n", notas);
    valor = valor % 100;

     notas = valor / 50;
    printf("notas de 50 => %d\n\n", notas);
    valor = valor % 50;

     notas = valor / 20;
    printf("notas de 20 => %d\n\n", notas);
    valor = valor % 20;

     notas = valor / 10;
    printf("notas de 10 => %d\n\n", notas);
    valor = valor % 10;

     notas = valor / 5;
    printf("notas de 5 => %d\n\n", notas);
    valor = valor % 5;

     notas = valor / 2;
    printf("notas de 2 => %d\n\n", notas);
    valor = valor % 2;

     notas = valor / 1;
    printf("notas de 1 => %d", valor);
    valor = valor % 1;

    
    
    






    return 0;
}