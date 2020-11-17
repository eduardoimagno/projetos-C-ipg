#include <stdio.h>
#include <stdlib.h>

int main (){
    int i ,n, soma ;

    for (n=2;n<=10000;n++){
        soma=1;
        for(i=2;i<=n/2;i++){
            if(n%i == 0){
                soma+=i;
            }    
        }
        if(n == soma ){
            printf("perfeito");
        }
    }


    return 0;
}