#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>


#define NUM_THREADS 5

void * thread_fun(void *arg) {
	int thread_id = *(int*)arg;
	printf("thread %d is running\n",thread_id);
	pthread_exit(NULL);
}
int main(){
	pthread_t threads[NUM_THREADS];
	int thread_args[NUM_THREADS];

	for (int i=0;i<NUM_THREADS;i++){
		thread_args[i] = i;
		if(pthread_create(&threads[i], NULL, thread_fun,&thread_args[i]) != 0){
			perror("pthread_create");
			exit(1);
		}
	}
	for (int i=0;i<NUM_THREADS;i++){
	pthread_join(threads[i],NULL);
	}
	printf("All threads completed");

}
