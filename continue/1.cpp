#include <stdio.h>

int main(void){
	
for(int i=1;i<11;i++){
	
	if(i%2==0){ //When 'i' is even, continue will execute therefore since it goes to the next interation, 'i' will not be printed
		continue; // Continues to the top of a loop (next iteration)
	}
	printf("%d\n",i);
}		
	
}
