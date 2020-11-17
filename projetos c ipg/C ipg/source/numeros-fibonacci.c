#include <stdio.h>
#include <stdlib.h>

int main (){
    int f1,f2,fn,n;

    printf("N? ");
    scanf("%d",&n);
    
    f1= 1;
    f2=0;
    for(int i=1;i<=n;i++){
        fn = f2 + f1;
        printf("F(%d)=%d\n", i,fn);
        f1 = f2;
        f2 = fn;
    }

    return 0;
}