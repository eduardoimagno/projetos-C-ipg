#include <stdio.h>
#include <stdlib.h>

int main(){
    float km,milhas;

    printf("Valor em quilometros: ");
    scanf("%f",&km);

    milhas=km*0.62137;

    printf("%.2f mi",milhas);

    return 0;
}