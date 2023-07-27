#include <stdlib.h>
#include <string.h>

/**
* argstostr - arg
* @ac: ac
* @av: av
* Return: char
*/
char *argstostr(int ac, char **av)
{
	int pos;
	int i;
	char *str;
	int total_len;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	total_len = 0;
	for (i = 0; i < ac; i++)
	{
	total_len += strlen(av[i]) + 1;
	}
	str = malloc(total_len * sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}
	pos = 0;
	for (i = 0; i < ac; i++)
	{
		strcpy(&str[pos], av[i]);
		pos += strlen(av[i]);
		str[pos++] = '\n';
	}
	return (str);
}
