#include <stdio.h>
#include <signal.h>
#include <unistd.h>
#include <stdlib.h>


void handler(int signum)
{
	printf("receiver signal:%d\n",signum);
	exit(0); 
}

int main()
{
	printf("receiver  process pid:%d\n ",getpid());
	signal(SIGUSR1,handler);

	while(1){
	pause();	
	}

}
