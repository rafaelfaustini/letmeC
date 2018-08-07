#include <stdio.h>

void menu(char a){
switch(a){ //Instead of using multiples if's, you can turn the code way more clean with switch-case structure
	case 'a':
		printf("First Option has been selected");
		break;
	case 'b':
		printf("Second Option has been selected");
		break;
	case 'c':
		printf("Third Option has been selected");
		break;
	default:
		printf("Invalid Option !");
		break;
	
}	
}

int main(void){

char selection;
while(!selection){
	printf("\n (a) First Option\n (b) Second Option\n (c) Third Option\n");
	scanf("%c",&selection);
}
menu(selection);	
}
