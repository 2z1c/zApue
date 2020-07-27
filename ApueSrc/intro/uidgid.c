#include "apue.h"

/*
 * Needed for logging funtions.
 */
int log_to_stderr = 1;

int main(void)
{
	printf("uid = %d, gid = %d, pid = %d\n", getuid(), getgid(),getpid());
	exit(0);
}
