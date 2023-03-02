#include "main.h"

/**
 * _strcat-concatenates strings
 * @dest: destination
 * @src: source
 * Return: string
 */
char *_strcat(char *dest, char *src)
{
	int len = 0;
	int i = 0;
	while (dest[len] != '\0')
	{
		len++;
	}
	while (src[i] != '\0')
	{
		dest[len + 1] = src[i];
		i++;
	}
	dest[len] = '\0';	
	return dest;	
}
