#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

    int cilindrada, ano_matricula;
    float taxa ;

    printf("Digite a cilindrada: ");
    scanf("%d", &cilindrada);
    printf("Digite o ano de matricula: ");
    scanf("%d", &ano_matricula );

    if (cilindrada >= 0 && cilindrada >= 1000 ){

        if (ano_matricula >= 1981 && ano_matricula <1989) taxa = 7.3;
        else if (ano_matricula >= 1990 && ano_matricula <1995) taxa = 10.4;
        else  taxa =16.5;

    } else if ( cilindrada >= 1000 && cilindrada >= 1300 ){
        
        if (ano_matricula >= 1981 && ano_matricula <1989) taxa =10.4;
        else if (ano_matricula >= 1990 && ano_matricula <1995) taxa = 18.6;
        else  taxa =33.1;

    } else if ( cilindrada > 1300){

         if (ano_matricula >= 1981 && ano_matricula <1989) taxa =14.5;
        else if (ano_matricula >= 1990 && ano_matricula <1995) taxa = 28.9;
        else  taxa =51.7;

    }

    printf("cilindrada veiculo : %d ",cilindrada);
    printf("ano matricula : %d ",ano_matricula);
    printf("total a pagar : %d ", taxa);

   
    return 0;
}