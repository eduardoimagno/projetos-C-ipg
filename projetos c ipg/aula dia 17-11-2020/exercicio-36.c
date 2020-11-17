#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main (){
    // Ler uma frase e um valor n, inteiro no intervalo de 1 e 5. escrever os valores de n em n vezes da frase
    char frase [100];
    int n, tamanho;

    printf("Escreva a frase : ");
    gets(frase);
    tamanho =strlen(frase);

    do
    {
        printf("Digite o numero do intervalo [1,5]: ");
        scanf("%i", &n);
        if((n<1) || (n>5)){

            printf("valor incorreto, o valor deve ser entre 1 e 5");

        }

    } while ((n<1)||(n>5));

    for (int i= n-1; i<tamanho; i += n){
        printf("%c", frase[i]);
    }
    printf("\n");
    

    return 0;
}