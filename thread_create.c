#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

// pthread_create()  function  starts a new thread in the calling process

void * myFunction(void *arg) {
 	printf("Hello from the Thread\n");
	return NULL;
}


int main(){
	pthread_t thread_id;
	
	if(pthread_create(&thread_id, NULL , myFunction, NULL)){
		perror("pthread_create");
		return 1;
	}

	pthread_join(thread_id, NULL);

	printf("Thread has finished execution. \n");

	return 0;
}
	
