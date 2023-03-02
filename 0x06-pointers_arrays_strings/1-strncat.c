#include "main.h"

/**
 * _strncat- concatenates 2 strings
 * @dest: destination
 * @src: source
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = 0;
	int i = 0;

	while (dest[len] != '\0')
	{
		len++;
	}
	while (i < n && src[i] != '\0')
	{
		dest[len] = src[i];
		i++;
		len++;
	}
	dest[len + 1] = '\0';
	return (dest);
}
