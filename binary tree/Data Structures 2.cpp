#include <stdio.h>
#include <stdlib.h>

struct arv{
	char info;
	struct arv *esq;
	struct arv *dir;
};
typedef struct arv Arv;

Arv* cria (void){
	return NULL;
} 

int vazia(Arv* a){
	if(a==NULL){
		return 1
	}
	return 0;
}



void insere(char ele, Arv* sae, Arv* sad){
	
	Arv *a = (Arv*)malloc(sizeof(arv));
	p->info ele;
	p->dir = sae;
	p->esq = sad;
}


int main(){

Arv* a1 = insere('J',cria(),cria());
Arv* a2 = insere('I',a1,cria());
Arv* a3 = insere('M',cria(),cria());
Arv* a4 = insere('H',a3,a2);
Arv* a5 = insere('D',cria(),a1);
Arv* a6 = insere('C',cria(),a1);
Arv* a7 = insere('G',cria(),a1);
Arv* a8 = insere('I',cria(),a1);
Arv* a9 = insere('I',cria(),a1);
Arv* a10 = insere('I',cria(),a1);
Arv* a11 = insere('I',cria(),a1);
Arv* a12 = insere('I',cria(),a1);,
Arv* a13 = insere('I',cria(),a1);

}
