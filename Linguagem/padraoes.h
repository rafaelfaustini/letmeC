#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>
char* substring(char s[], char sub[], int ini, int fim) {
	int i;
	for (int i = ini ; i< fim ; i++){
		sub[i] = s [i];
		
	}
	printf("\n%s\n", sub);
	return sub;
}

char* corta(int contador,int *progresso, char *str){
	int achou=0;
	int i;
	int ini = *progresso;
	for(i=*progresso;i< strlen(str);i++){
		if(str[i+1] == 37){
			if(achou == 1){
				*progresso = i;
				break;
			}
			achou++;
		}
		
		
	}
	
	char *novo = (char*) malloc(sizeof(char)*i+1);
	novo = substring(str, novo, ini, i );

	return novo;
}


void imprimir(int quantArgs,char *formato, ...){
	va_list arg;
	va_start(arg, quantArgs);
	int posicao=0;
	int progresso=0;
	for(int i = 0; i< quantArgs; i++){
			printf(corta(i, &progresso, formato), va_arg(arg, int));
	}

	va_end(arg);
	
}
