#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char* argv[])
{
	printf("Beginning (pid:%d)\n", (int) getpid() );
	int rc = fork();
	if (rc < 0)
	{
		fprintf(stderr, "fork error\n");
		exit(1);
	} else if (rc == 0)									// child
		printf("Child (pid:%d)\n", (int) getpid() );
	else												// parent
		printf("Parent of %d (pid:%d)\n", rc, (int) getpid() );
	
	return 0;
}