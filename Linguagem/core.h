#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "padraoes.h>
#include "lista.h"


struct lexica {
	
const char *comando[2] = {"imprimir","entrada"};
};
typedef struct lexica Lexica;

char** parseCommand(char* line){

int i;
int inicio=0;
int fim=0;
char* strNova;
Lista lista;
lista = lst_cria();
for(i=0;i<strlen(line);i++){
	if(line[i] != 32){
		fim++;
	} else{
		strNova = (char*) malloc(sizeof(char)*i+1);
		lista.add(substring(char line[], char strNova[], inicio, fim) );
		ini = i+1;
		fim++;
	}
}

	
}
	



int parse(FILE *arquivo){
	int = 0;
	for(i=0; i=EOF;i++){
		line = fgetc(arquivo);
		
	}
}
