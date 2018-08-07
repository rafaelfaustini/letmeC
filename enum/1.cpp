#include <stdio.h>
enum flag{Forbidden= 403, NotFound = 404, OK = 200};
int main(void){
int code;
printf("Is it OK ? Type the http error code:\n");
scanf("%d",&code);
if(code == OK){
	printf("It's okay");
}
	
}
