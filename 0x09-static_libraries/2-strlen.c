#include "main.h"

/**
 * _strlen - geats length of string
 * @s: string
 * Return: n
 */
int _strlen(char *s)
{
	int n = 0;

	while (*s != '\0')
	{
		n++;
		s++;
	}
	return (n);
}

