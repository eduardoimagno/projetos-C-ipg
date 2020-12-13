#include <stdio.h>

int main(){
    int numero,digito;

    printf("Digite um numero de 3 digitos: ");
    scanf("%d",&numero);
    printf("Qual o digito pretende saber ?");
    scanf("%d",&digito);
    
    if ((digito>3)||(digito<1))
    {
        printf("Erro");
    }else{
    switch (digito)
        {
        case 1: numero/=100;  break;
        case 2: numero=((numero%100-numero%10) /10);  break;
        case 3: numero%=10;  break;
        }

        printf("%d",numero);
    }
    

    

    return 0;
}