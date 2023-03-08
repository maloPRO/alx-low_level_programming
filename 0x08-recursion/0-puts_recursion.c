#include "main.h"

/**
 * _puts_recursion - prints out string
 * @s: string
 */
void _puts_recursion(char *s)
{
	int len = 0;
	int i = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	while (i < len)
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}

