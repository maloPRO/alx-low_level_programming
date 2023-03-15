#include <stdlib.h>
#include <string.h>

/**
 * str_concat - copies strings
 * @s1: str 1
 * @s2: str 2
 * Return: new string
 */
char *str_concat(char *s1, char *s2)
{
	int len1;
	int len2;
	char *new_str;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = strlen(s1);
	len2 = strlen(s2);
	new_str = (char *) malloc(len1 + len2 + 1);

	if (new_str == NULL)
	{
		return (NULL);
	}
	strcpy(new_str, s1);
	strcat(new_str, s2);

	return (new_str);
}
