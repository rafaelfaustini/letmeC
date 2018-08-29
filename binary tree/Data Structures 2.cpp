#include <stdio.h>
#include <stdlib.h>
#include <windows.h>


struct bin_tree{
	char info;
	struct bin_tree *left;
	struct bin_tree *right;
};typedef struct bin_tree Tree;

Tree* create(){
	return NULL;
}

int empty(Tree* a){
	if(a==NULL){
		return 1;
	}
	return 0;
}

Tree* add(char info,Tree* left,Tree* right)
{
Tree* p=(Tree*)malloc(sizeof(Tree));
p->info = info;
p->left = left;
p->right = right;
return p;
}

void in_order(Tree* a)
{
if (!empty(a)){
printf("%c ", a->info); 
in_order(a->left); 
in_order(a->right); 
}
}
void pre_order (Tree* a)
{
if (!empty(a)){
pre_order(a->left); 
printf("%c ", a->info);
pre_order(a->right); 
}
}
void post_order (Tree* a)
{
if (!empty(a)){
post_order(a->left); 
post_order(a->right);
printf("%c ", a->info); 
}
}



int main(){
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);	
	
// J
Tree* a= add('J',create() ,create() );
// I
Tree* a1= add('I', create(), a );
// M
Tree* a2= add('M', create() , create() );
// H
Tree* a3= add('H',a2 ,a1 );
// D
Tree* a4= add('D',a3 ,create() );
// G
Tree* a5= add('G',create() ,create() );
// C
Tree* a6= add('C',a5 ,a4 );


// L
Tree* a7= add('L',create(),create());
// K
Tree* a8= add('K',create(),a7);
// F
Tree* a9= add('F',create(),create());
// E
Tree* a10= add('E',a8 ,a9 );


// B
Tree* a11= add('B',a10 ,a6 );



// Raiz A
Tree* root= add('A',a11 ,create() );

SetConsoleTextAttribute(hConsole, BACKGROUND_RED);
printf("\n\t\tInOrder \n\t");
in_order(root);
printf("\n\n");

printf("\t\tPreOrder \n\t");
pre_order(root);
printf("\n\n");



printf("\t\tPostOrder \n\t");

post_order(root);

printf("\n\n");


return 0;
}
