#include <stdio.h>
#include <stdlib.h>

int main(){

    float volume,area,altura,resultado;

    printf("Qual a area ? ");
    scanf("%f", &area);
    printf("qual a altura? ");
    scanf("%f", &altura);

    volume=((area*1/3)*altura);

    printf("Volume = %1.f cm3",volume);

    return 0;
}