#include <stdio.h>

int main(){
	int a = 1;
	printf("%d teste\n", a==1);
	
	a=2;
	printf("%d teste\n", a==1);
	
	a= a==1;
	printf("a=%d\n", a);
	
	a= a==0;
	printf("a=%d\n", a);
	
	int b = 0;
	int c = 1;
	
	printf("Is A,B,C equal to 0 ? (1=Yes | 0=No)\nAnswer: %d\n",(a==0+b==0+c==0)==3);
	
	a = 0; 
	b = 0;
	c = 0;	
	
	printf("\nTESTE %d %d %d = %d\n",a==0,b==0,c==0,((a==0)+(b==0)+(c==0)));
		printf("\nTESTE %d %d %d = %d\n",a==0,b==0,c==0,((a==0)+(b==0)+(c==0))==3);
	printf("Is A,B,C equal to 0 ? (1=Yes | 0=No)\nAnswer: %d\n",(a==0+b==0+c==0)==3); // Without Parentesis
		printf("Is A,B,C equal to 0 ? (1=Yes | 0=No)\nAnswer: %d\n",((a==0)+(b==0)+(c==0))==3);
		
			
	
	
	
	
}
