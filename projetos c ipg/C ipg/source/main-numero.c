#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
int main (){

    int n1, n2;

    printf("Digite o dois valores : ");
    scanf("%d %d", &n1, &n2);


    if ( n1 > n2){

        printf("\n\n O mairo de %d e %d = %d \n\n", n2, n1 , n1);

    } else if (n1 == n2){
        printf("Os numeros sao iguais %d = %d \n\n", n1,n2);
    } else {
        printf("\n\n O mairo de %d e %d = %d \n\n", n2, n1 , n2);
    }
    
    //OUTRO METODO COM VARIAVEL MAIOR COMO REFERENCIA

    //Menor do inteirs. incluir #inlcude <limits.h>
    int maior = INT_MIN ; 

    if (n1 > maior){
       maior  = n1;
    }
    if (n2 > maior)
{
        maior = n2;

    }

    printf("\n\n O maior de %d e %d = %d \n\n", n2, n1 , maior);
    
}