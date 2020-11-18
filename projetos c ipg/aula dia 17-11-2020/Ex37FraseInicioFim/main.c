/****************************************************************************
 *                                                                          *
 * File    : main.c                                                         *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/

#include <stdio.h>

/****************************************************************************
 *                                                                          *
 * Function: main                                                           *
 *                                                                          *
 * Purpose : Main entry point.                                              *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/

int main(int argc, char *argv[])
{
      	char frase[100];
	int inicial,final, tamanho, i;

	printf("Frase? ");
	gets(frase);
	tamanho = strlen(frase);

	do{
		printf("Valor inicial ? ");
		scanf("%d", &inicial);
		if ((inicial<0)||(inicial>tamanho)){
			printf("Valor incorreto\n");
		}
	}while((inicial<0)||(inicial>tamanho));

	do{
		printf("Valor final ? ");
		scanf("%d", &final);
		if ((final<inicial)||(final>tamanho)){
			printf("Valor incorreto\n");
		}
	}while((final<inicial)||(final>tamanho));

	for (i = inicial-1; i<=final; i++){
		printf("%c", frase[i]);
	}
	printf("\n");

    return 0;
}

