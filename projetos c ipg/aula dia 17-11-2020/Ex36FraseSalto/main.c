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
#include <string.h>

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
	int n, tamanho, i;

	printf("Frase? ");
	gets(frase);
	tamanho = strlen(frase);

	do{
		printf("N [1,5]? ");
		scanf("%d", &n);
		if ((n<1)||(n>5)){
			printf("Valor incorreto\n");
		}
	}while((n<1)||(n>5));

	for (i = n-1; i<tamanho; i = i + n){
		printf("%c", frase[i]);
	}
	printf("\n");

	i = n-1;
	do{
		printf("%c", frase[i]);
		i = i + n;
	}while(i<tamanho);
	printf("\n");

	i = n-1;
	while(i<tamanho){
		printf("%c", frase[i]);
		i = i + n;
	}
	printf("\n");

    	return 0;
}

