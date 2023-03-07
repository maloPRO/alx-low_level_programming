#include "main.h"

/**
* _strspn - returns length of substring
* @s: string
* @accept: substring
* Return: length of substring
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	char *p;

	while (*s)
	{
		for (p = accept; *p; p++)
		{
			if (*s == *p)
			{
				count++;
				break;
			}
		}
	if (!*p)
	{
		break;
	}
	s++;
}
	return (count);
}
