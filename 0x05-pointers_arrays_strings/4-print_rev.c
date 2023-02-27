#include <string.h>
#include "main.h"

/**
 * print_rev - prints reverse string
 * @s: string
 */
void print_rev(char *s)
{
	int i;
	int len = strlen(s);

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

