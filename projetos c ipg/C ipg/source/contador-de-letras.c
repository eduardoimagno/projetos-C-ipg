#include <stdio.h>
#include <stdlib.h>

int main (){
    
    char frase[100], letra;
    int contaletra=0;

    printf("introduza uma frase: ");
    gets(frase);
    printf("Frase: %s \n", frase);
    printf("letra? ");
    scanf("%c", &letra);

    for(int i=0;frase[i];i++){
        if(letra == frase[i]){
            contaletra++;
        }

    } 

    printf("A letra %c aparece %d vez%s\n", letra, contaletra,((contaletra>1)?"es":""));

    

    return 0;
}