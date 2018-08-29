#include <stdio.h>
#include <stdlib.h>

struct arv{
	char info;
	struct arv *esq;
	struct arv *dir;
};typedef struct arv Arv;

Arv* cria(){
	return NULL;
}

int vazia(Arv* a){
	if(a==NULL){
		return 1;
	}
	return 0;
}

Arv* adiciona(char info,Arv* sae,Arv* sad)
{
Arv* p=(Arv*)malloc(sizeof(Arv));
p->info = info;
p->esq = sae;
p->dir = sad;
return p;
}

void simetrica(Arv* a)
{
if (!vazia(a)){
printf("%c ", a->info); 
simetrica(a->esq); 
simetrica(a->dir); 
}
}
void pre_ordem (Arv* a)
{
if (!vazia(a)){
pre_ordem(a->esq); 
printf("%c ", a->info);
pre_ordem(a->dir); 
}
}
void pos_ordem (Arv* a)
{
if (!vazia(a)){
pos_ordem(a->esq); 
pos_ordem(a->dir);
printf("%c ", a->info); 
}
}


int main(){
Arv* a=adiciona('J',cria(),cria());
Arv* a1=adiciona('I',a,cria());
Arv* a2=adiciona('M',cria(),cria());
Arv* a3=adiciona('H',a1,a2);
Arv* a4=adiciona('D',cria(),a3);
Arv* a5=adiciona('G',cria(),cria());
Arv* a6=adiciona('C',a4,a5);
Arv* a7=adiciona('L',cria(),cria());
Arv* a8=adiciona('K',a7,cria());
Arv* a9=adiciona('F',cria(),cria());
Arv* a10=adiciona('E',a9,a8);
Arv* a11=adiciona('B',a6,a10);
Arv* a12=adiciona('A',cria(),a11);

simetrica(a12);
printf("\n");
pre_ordem(a12);
printf("\n");
pos_ordem(a12);

return 0;
}
