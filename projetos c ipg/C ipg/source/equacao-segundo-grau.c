#include <stdio.h>
#include <math.h>

int main(){

    int a ,b ,c = 0;
    printf("qual o valor de A ?  ");
    scanf("%i", &a);
    printf("qual o valor de B ?  ");
    scanf("%i", &b);
    printf("qual o valor de C?   ");
    scanf("%i", &c );

    int r1 = ((-b) - sqrt(b*b-4*a*c))/2*a;
    int r2 = ((-b) + sqrt(b*b-4*a*c))/2*a;

    printf("\n\nO valor do x1 é = %i \n\n O valor do x2 é = %i ", r1 ,r2);
    
    
    return 0;
}