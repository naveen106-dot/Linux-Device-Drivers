#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>

int main()
{
	int fd[2];
	pipe(fd);
 	if(fork() == 0)
	{
	char buffer[100]; 
	close(fd[1]);
	read(fd[0],buffer,sizeof(buffer));
	printf("Buffer message:%s\n",buffer);
	close(fd[0]);
	
	}else
	{
	close(fd[0]);
	char *message = "Hello Naveen ,I am from Nellore";
	write(fd[1],message,strlen(message)+1);
	close(fd[1]);
	wait(NULL);
	return 0;

	}
}



