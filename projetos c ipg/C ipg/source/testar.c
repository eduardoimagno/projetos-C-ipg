#include <stdio.h>


int main(){

    int valor1, valor2;
    int soma;
        
        printf("Valor 1 ? " );
        scanf("%d",&valor1);
        printf("Valor 2 ? " );
        scanf("%d",&valor2);
        soma = valor1 + valor2;
        printf("%d + %d = %d \n",valor1,valor2, soma);
        return 0;
}
