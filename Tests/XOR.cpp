#include <stdio.h>

int XOR(int a, int b){
	return (a==0 + b==0)%2;
}


int main(){
	
	int a = 0;
	int b = 0;
	int tests = 0;
	tests++;
	if(XOR(a,b)){ // a xor b = 0 -> false
		printf("ENTERED on test %d\n",tests);
		
	}

	a = 0;
	b = 1;
	tests++;	
	if(XOR(a,b)){ // a xor b = 1 -> true
		printf("ENTERED on test %d\n",tests);
	}
	
	a = 1;
	b = 0;
	tests++;	
	if(XOR(a,b)){ // a xor b = 1 -> true
			printf("ENTERED on test %d\n",tests);
	}
	
	a = 1;
	b = 1;
	tests++;	
	if(XOR(a,b)){ // a xor b = 1 -> false
		printf("ENTERED on test %d\n",tests);
	}
	
	
}
