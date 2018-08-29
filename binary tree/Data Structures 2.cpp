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
// J
Arv* a=adiciona('J',cria() ,cria() );
// I
Arv* a1=adiciona('I', cria(), a );
// M
Arv* a2=adiciona('M', cria() , cria() );
// H
Arv* a3=adiciona('H',a2 ,a1 );
// D
Arv* a4=adiciona('D',a3 ,cria() );
// G
Arv* a5=adiciona('G',cria() ,cria() );
// C
Arv* a6=adiciona('C',a5 ,a4 );


// L
Arv* a7=adiciona('L',cria(),cria());
// K
Arv* a8=adiciona('K',cria(),a7);
// F
Arv* a9=adiciona('F',cria(),cria());
// E
Arv* a10=adiciona('E',a8 ,a9 );


// B
Arv* a11=adiciona('B',a10 ,a6 );


// Raiz A
Arv* a12=adiciona('A',a11 ,cria() );


printf("\n\t\tInOrder \n\t");
simetrica(a12);
printf("\n\n");

printf("\t\tPreOrder \n\t");
pre_ordem(a12);
printf("\n\n");

printf("\t\tPostOrder \n\t");
pos_ordem(a12);
printf("\n\n");

return 0;
}
