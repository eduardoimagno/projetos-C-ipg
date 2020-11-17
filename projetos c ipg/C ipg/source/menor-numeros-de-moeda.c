#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>


int main (){
    setlocale(LC_ALL, "Portugues");

    float vi = 0;
    int valor, notas = 0;

    printf("Qual o valor ?")
    scanf("%d", &vi);

    valor = vi * 100;

    notas = valor / (100*500);
    printf("notas de 500 => %d\n\n", notas);
    valor = valor % 50000;

    notas = valor / (100*200);
    printf("notas de 200 => %d\n\n", notas);
    valor = valor % 20000;

    notas = valor / (100*100);
    printf("notas de 100 => %d\n\n", notas);
    valor = valor % 10000;

    notas = valor / (50*100);
    printf("notas de 50 => %d\n\n", notas);
    valor = valor % 50;

    notas = valor / (100*20);
    printf("notas de 20 => %d\n\n", notas);
    valor = valor % 2000;

    notas = valor / (100*10);
    printf("notas de 10 => %d\n\n", notas);
    valor = valor % 1000;

    notas = valor / (100*5);
    printf("notas de 5 => %d\n\n", notas);
    valor = valor % 500;

    notas = valor / (100*2);
    printf("moedas de 2 => %d\n\n", notas);
    valor = valor % 200;

    notas = valor / (100*1);
    printf("moedas de 1 => %d", valor);
    valor = valor %100;

    notas = valor /50;
    printf("moedas de 0,50 => %d", valor);
    valor = valor %50;

    notas = valor /20;
    printf("moedas de 0,20 => %d", valor);
    valor = valor %20;

    notas = valor /10;
    printf("moedas de 0,10 => %d", valor);
    valor = valor %10;

    notas = valor /5;
    printf("moedas de 0,05 => %d", valor);
    valor = valor %5;

    notas = valor /2;
    printf("moedas de 0,02 => %d", valor);
    valor = valor %2;

    notas = valor /1;
    printf("moedas de 0,01 => %d", valor);
    valor = valor %1;

    return 0;
}