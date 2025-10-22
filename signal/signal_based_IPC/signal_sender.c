#include  <stdio.h>
#include  <signal.h>
#include <unistd.h>
#include <stdlib.h>


int main( int argc,char *argv[])
{
 	if (argc < 2) {
        printf("Usage: %s <receiver_pid>\n", argv[0]);
        return 1;
	}

	int pid = atoi(argv[1]);
    	kill(pid, SIGUSR1);
    	printf("Signal sent to process %d\n", pid);
    return 0;
}
