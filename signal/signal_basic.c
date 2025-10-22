#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


void signal_handler(int signum)
{
	printf("caught the signal:%d\n",signum);
	exit(1);
}
int main()
{
	// signal(int signum, sighandler_t handler);
	signal(SIGINT,signal_handler);

	while(1)
	{
	printf("Running...\n");
	sleep(1);
	}
	return 0;
}
