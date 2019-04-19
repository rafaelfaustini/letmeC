#include <stdlib.h>
struct lista{
	char *conteudo;
	struct lista* ant;
	struct lista* prox;
};
typedef struct lista Lista;

Lista* lst_cria (void)
{
 return NULL;
}

Lista* listaInsere(Lista* l, char *texto){
	Lista* novo = (Lista*) malloc (sizeof(Lista));
	novo->conteudo = texto;
	novo->prox = l;
	novo->ant = NULL;
	
	if(l != NULL){
		l->ant = novo;
	}
	
	return novo;
}



