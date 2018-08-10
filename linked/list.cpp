#include <stdio.h>
#include <stdlib.h>


struct list{
int info;
struct list *prox ;	
};
typedef struct list List;

List* create(){
	return NULL;
}

List* insert(List* l,int i){
	List* p = (List*) malloc(sizeof(List));
	p->info = i;
	p->prox = l;
	return p;	
}
int empty(List* l){
	return (l==NULL);
}

List* remove(List* l, int n){
	if(!empty(l)){
	if(l->info == n){
		List* t= l;
		l = l->prox;
		free(t);
	}
	else{
		l->prox = remove(l->prox,n);
	}
}
return l;
}
void print(List* l){
 printf("%d\n", l->info);
 print(l->prox);
}

int main(){
List* test;
test= create();
test = insert(test, 1);
test= insert(test, 2);
test = insert(test, 3);
test = remove(test, 3);
test = insert(test, 4);
print(test);	
}
