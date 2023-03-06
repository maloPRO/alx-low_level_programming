#include "main.h"

/**
* _memcpy - copies adress
* @dest: destination
* @src: source
* @n: number
* Return: dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p_dest = dest;
	char *p_src = src;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*p_dest++ = *p_src++;
	}

	return (dest);
}

