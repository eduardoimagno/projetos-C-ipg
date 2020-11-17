#include <stdio.h>
#include <stdlib.h>

int main (){
    int num, i, resultado = 0;

    for(num=2;num<=10000;num++){
        resultado=1;
        for (i = 2; i <= num / 2; i++)
        {
            if (num % i == 0)
            {
            resultado++;
            break;
            }
        }

        if (resultado == 1){
        printf("%d e um numero primo\n", num);
        }
    }
 return 0;
}