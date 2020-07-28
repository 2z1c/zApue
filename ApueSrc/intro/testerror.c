#include "apue.h"
#include <errno.h>

/*
 * Needed for logging funtions.
 */
int log_to_stderr = 1;

int main(int argc, char *argv[])
{
	fprintf(stderr, "EACCES: %s\n", strerror(ENOTBLK));
	errno = ENOENT;
	perror(argv[0]);
	exit(0);
}
