#include <ctype.h>
/**
 * cap_string - capitalizes letters in a string
 * @str: string
 * Return: Capitalized string
 */
char *cap_string(char *str)
{
	int i = 0;

	str[0] = toupper(str[0]);

	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
		str[i] == ',' || str[i] == ';' || str[i] == '.' ||
		str[i] == '!' || str[i] == '?' || str[i] == '\\' ||
		str[i] == '(' || str[i] == ')' || str[i] == '{' ||
		str[i] == '}' || str[i] == '-')
		{
			i++;
			str[i] = toupper(str[i]);
		}
	i++;
	}
	return (str);
}
