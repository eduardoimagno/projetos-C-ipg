#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(){

    float euro, real, dolarUSA, dolarCND, iene, rubloRRS, kuanza = 0;

    printf("Digite o valor que deseja converter em Euros: ");
    scanf("%f", &euro);

    real = euro * 6.67;
    dolarUSA = euro * 1.19;
    dolarCND = euro * 1.56;
    iene = euro * 124.21;
    rubloRRS = euro * 90.41;
    kuanza = euro * 779,39 ;

    printf("O valor em Euros foi: %.2f \n O valor em Real e : %.2f \n O valor em Dolar Americano e : %.2f \n O valor em Dolar Canadense e : %.2f\n Ovalor em Iene e : %.2f \n O valor em Rublo Russo e : %.2f \n O valor em Kuanza e : %.2f " , euro, real , dolarUSA, dolarCND, iene, rubloRRS, kuanza);

    return 0;
}