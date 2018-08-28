#include <stdio.h>
#include <stdlib.h>

struct arv{
	char info;
	struct arv *esq;
	struct arv *dir;
};
typedef struct arv Arv;

Arv* arv_cria (void){
	return NULL;
} 


void insere(char ele, Arv* sae, Arv* sad){
	
	Arv *a = (Arv*)malloc(sizeof(arv));
	p->info ele;
	p->dir = sae;
	p->esq = sad;
}


int main(){
	
}
