#include <stdlib.h>
#include <string.h>

/**
* string_nconcat - concats
* @s1: string1
* @s2: string2
* @n: size
* Return: string
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	size_t s1_len;
	size_t s2_len;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	s1_len = strlen(s1);
	s2_len = strlen(s2);
	if (n >= s2_len)
	{
		n = s2_len;
	}
	result = malloc(s1_len + n + 1);
	if (result == NULL)
	{
		return (NULL);
	}
	memcpy(result, s1, s1_len);
	memcpy(result + s1_len, s2, n);
	result[s1_len + n] = '\0';
	return (result);
}
