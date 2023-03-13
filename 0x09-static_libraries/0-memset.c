#include "main.h"

/**
 * _memset - fills memory with contant value
 * @s: start address of memory to be filled
 * @b: the disired number
 * @n: number of bytes to be changed
 * Return: chamged array with new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
