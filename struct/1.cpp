#include <stdio.h>
#include <string.h>

struct games{
	char title[100];
	char author[100];
};

int main(){
	struct games Game1;	
	strcpy(Game1.title, "Game1 Title");
	strcpy(Game1.author, "Game1 Author");
	
	struct games Game2;
	strcpy(Game2.title, "Game2 Title");
	strcpy(Game2.author, "Game2 Author");
	
	printf("1. %s \n\tBy %s\n",Game1.title,Game1.author);
	printf("2. %s \n\tBy %s",Game2.title,Game2.author);
}
