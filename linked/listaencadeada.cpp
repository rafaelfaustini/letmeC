#include <stdio.h>>
#include <stdlib.h>

struct lista{
	int conteudo;
	struct lista *proximo;	
};
typedef struct lista Lista;


Lista* cria(){	
	return NULL;
}

Lista* insere(Lista* l, int v){
	Lista* novo = (Lista*) malloc(sizeof(Lista));
	novo->conteudo = v;
	novo->proximo = l;
	return novo;
}

int vazia(Lista* l){
	if(l==NULL)
		return 1;
	return 0;
}

int maior(Lista* l){
	Lista* p = l;
	static int max = -9999999;

	if(!vazia(p)){

	if(p->conteudo > max){

		max = l->conteudo;
}

	maior(p->proximo);
}

return max;
}

int menor(Lista* l){
	Lista* p = l;
	static int min = 9999999999;

	if(!vazia(p)){

	if(p->conteudo < min){

		min = l->conteudo;
}

	menor(p->proximo);
}

return min;
}

int busca(Lista* l, int v){
	Lista* p = l;
	if(vazia(p)){
		return 0;
	}
	
	if(p->conteudo == v){
		return 1;
	}
	
	busca(p->proximo,v);
	
}

void contem(Lista* l , int v){
	if(busca(l, v)){
		printf("\n%d foi encontrado lista encadeada",v);
	} else{
		printf("\n%d nao foi encontrado na lista encadeada",v);
	}	
}

int tamanho(Lista* l){
	Lista* p = l;
	static int len = 0;
	if(!vazia(p)){
		len++;
		tamanho(p->proximo);
	}
	return len;
}



void printa(Lista* l){
	if(l!=NULL){
	printf("%d\n",l->conteudo);
	printa(l->proximo);
}
}

float media(Lista* l){
	static float m=0;
	Lista* p = l; 
	if(!vazia(l)){
		m += p->conteudo;
		media(p->proximo);
	}
	
	return m/tamanho(l);
}


int main(){
	
	Lista* lista_encadeada;
	lista_encadeada = cria();
	lista_encadeada = insere(lista_encadeada, 15);
	lista_encadeada = insere(lista_encadeada, 24);
	lista_encadeada = insere(lista_encadeada, 45);
		lista_encadeada = insere(lista_encadeada, 2);
			lista_encadeada = insere(lista_encadeada, 49);

	printa(lista_encadeada);

	printf("\t Buscas:\n");
		printf("\n-----------------------");
	contem(lista_encadeada, 23);
	contem(lista_encadeada, 46);
	contem(lista_encadeada, 24);
	printf("\n-----------------------\n");
printf("\nO maior numero da lista encadeada eh : %d",maior(lista_encadeada));
printf("\nO menor numero da lista encadeada eh : %d",menor(lista_encadeada));
printf("\nO tamanho da lista encadeada eh : %d",tamanho(lista_encadeada));
printf("\nA media dos conteudos da lista eh : %.2f",media(lista_encadeada));

	
	


	
}
