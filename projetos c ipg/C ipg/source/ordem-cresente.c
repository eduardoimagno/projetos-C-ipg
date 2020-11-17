#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int main (){

    int n1, n2 ;

    printf("Digite o dois valores : ");
    scanf("%d %d", &n1, &n2);


    if ( n1 > n2){

        printf("\n\n%d < %d ", n2,n1);

    } else if (n1 == n2){
        printf("\n\n%d > %d ", n1,n2);
    } else {
        printf("\n\n%d > %d ", n1,n2);
    }
    



}