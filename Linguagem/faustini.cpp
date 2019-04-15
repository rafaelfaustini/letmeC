#include "core.h"
#include "string.h"
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]){
	int count = strlen(argv[1])+5;
	char *nomeArquivo = (char*) malloc(sizeof(char)*count);
	strcpy(nomeArquivo, argv[1]);
	strcat(nomeArquivo,".faus");
	FILE *arquivo;
	
	arquivo = fopen(nomeArquivo, "r");
	if(arquivo == NULL){
		printf("Invalid Script File");
	}
}
