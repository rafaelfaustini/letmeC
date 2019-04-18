#include "core.h"
#include "string.h"
#include <stdlib.h>
#include <stdio.h>
#include "padraoes.h"

int main(int argc, char *argv[]){
	/*
	if(argc<=1){
		printf("faustini: no input files", argc);
		return 1;
	}
	*/
	//int count = strlen(argv[1])+5;
	//char *nomeArquivo = (char*) malloc(sizeof(char)*count);
	//strcpy(nomeArquivo, argv[1]);
	//strcat(nomeArquivo,".faus");
	FILE *arquivo;
	
	//arquivo = fopen(nomeArquivo, "r");

	if(arquivo == NULL || argc<=1){
		printf("Invalid Script File\n");
	}
	
	imprimir(3,"abc %d %d %d", 54, 26, 34);
	
	return 0;
}
