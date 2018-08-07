#include <stdio.h>
int main(void){
  for(int i=0;i<10;i++){
  	printf("%d",i);
  	if(i==5)
  		break; // The break forces the termination of the loop
  		// Without the break it would iterate from 0 to 9
  }	
}
