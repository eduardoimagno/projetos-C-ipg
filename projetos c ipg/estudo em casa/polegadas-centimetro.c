#include <stdio.h>
#include <stdlib.h>

int main(){
    float polegadas, centimetros;

    printf("Valor em polegada?  ");
    scanf("%f", &polegadas);

    centimetros= polegadas/0.39370;

    printf("%.2f in : %.1f cm",polegadas,centimetros );

    return 0 ;
}