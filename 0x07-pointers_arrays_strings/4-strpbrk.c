#include <string.h>

/**
* _strpbrk - searches string
* @s: string
* @accept: value
* Return: accept
*/
char *_strpbrk(char *s, char *accept)
{
	int s_len = strlen(s);
	int accept_len = strlen(accept);
	int i, j;

	for (i = 0; i < s_len; i++)
	{
		for (j = 0; j < accept_len; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}
	}
	return (NULL);
}
