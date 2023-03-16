#include <stdlib.h>
#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

/**
 * malloc_checked - allocates mem
 * @b: size
 * Return: adress
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
	{
	fprintf(stderr, "Error: malloc failed: %s\n", strerror(errno));
	_exit(98);
	}
	return (p);
}
