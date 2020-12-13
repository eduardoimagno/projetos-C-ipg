#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero, idade;
    char t;
    printf("Digite seu numero de aluno: ");
    scanf("%d",&numero);
    printf("Digite sua idade :");
    scanf("%d", &idade);
    printf("E trabalhador estudante ? [S] ou [N]");
    getch("%c",t);
    printf("\nBem-Vindo               %d\n",numero);
    printf("\nIdade:     %d...anos",idade);

return 0;
}