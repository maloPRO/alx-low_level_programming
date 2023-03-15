#include <string.h>
#include <stdlib.h>
/**
* _strdup - returns newly allocated str
* @str: string to be duplicated
* Return: duplicate
*/
char *_strdup(char *str)
{
	char *new_str;

	if (str == NULL)
	{
		return (NULL);
	}

	new_str = (char *) malloc(strlen(str) + 1);

	if (new_str == NULL)
	{
		return (NULL);
	}

	strcpy(new_str, str);
	return (new_str);
}
