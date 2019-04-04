#include <stdio.h>
#include <pthread.h>

void *task(void *msg){ // Generic parameter
	char* letra = (char*)msg;
	printf("Hello %c \n", *letra);
	pthread_exit(NULL);
}


int main(){
	pthread_t thread[10]; // Memory allocated
	char m = 61+'0';
	for(int i=0; i< 10; i++){
		m = 61+i+'0';
		printf("Thread %d:\n",i);
		pthread_create(&thread[i], NULL, task, (void *)&m); // Gives the thread_id memory address and a pointer that points to the function tarefa
}
	pthread_exit(NULL);

}

