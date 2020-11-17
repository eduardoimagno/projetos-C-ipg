#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main (){
    // Ler uma frase e escrever os caracteres entre um valor inicial e final
    char frase [100];
    int inicial, final, tamanho;

    printf("Escreva a frase : ");
    gets(frase);
    tamanho =strlen(frase);

    do
    {
        printf("Digite o valor inicial : ");
        scanf("%i", &inicial);
        if((inicial<0) || (inicial>tamanho)){

            printf("valor incorreto");

        }

    } while ((inicial<0) || (inicial>tamanho));
    do
    {
        printf("Digite o valor final : ");
        scanf("%i", &final);
        if((final<inicial) || (final>tamanho)){

            printf("valor incorreto");

        }

    } while ((final<0) || (final>tamanho));

    for (int i= inicial-1; i<final; i++){
        printf("%c", frase[i]);
    }
    printf("\n");
    

    return 0;
}