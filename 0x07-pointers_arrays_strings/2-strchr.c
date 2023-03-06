#include "main.h"
/**
* _strchr - checks for character in string
* @s: string
* @c: character
* Return: pointer to occurence
*/
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return ((char *) s);
		}
		s++;
	}
	return (NULL);
}
