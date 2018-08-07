#include <stdio.h>

int main(){
	
	for(int i=0;i<10;i++){
		if(i+1==6)
			goto end;
		printf("%d\n",i+1);
	}
	end: printf("\nEnd of loop");
}
