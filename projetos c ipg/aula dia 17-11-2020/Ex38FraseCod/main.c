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
	char charCod;
	int n;

	printf("Frase? ");
	gets(frase);

	printf("Codigo? ");
	scanf("%d", &n);

	// para minusculas
	for (int i=0;frase[i];i++){
		if (frase[i] != ' '){
			charCod = (frase[i]+n);
			if (charCod > 'z' ){
				charCod = ((frase[i]+n)-'z')+'a'-1;
			} 
		} else charCod = ' ';
		printf("%c", charCod);
		
	}
    	return 0;
}

