#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Converter graus Celcius em graus Fahrenheit

int main (){

    float f ,c = 0;
    printf("Escreva a temperatura em celcius que deseja converter: ");

    scanf("%f", &c);

    f = 1.8 * c + 32;

    printf("A temperatura em fahrenheit e : %2.f ", f);


    return 0;
}