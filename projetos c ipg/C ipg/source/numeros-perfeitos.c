#include <stdio.h>
#include <stdlib.h>

int main (){
    int i ,n ;
    int soma =1;

    printf("Qual numero deseja saber se e perfeito? ");
    scanf("%d",&n);

    for(i=2;i<=n/2;i++){
        if(n%i == 0){
            soma+=i;
        }    
    }
    if(soma == n){
        printf("perfeito");
    }else{
        printf("Nao e perfeito");
        }


    return 0;
}