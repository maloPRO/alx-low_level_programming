#include "main.h"

/**
* _memset - fills memorywith a constant byte
* @s: string
* @b: buffer
* @n: number
* Return: pointer to memory s
*/

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n-- > 0)
	{
		*p++ = b;
	}
	return (s);
}
