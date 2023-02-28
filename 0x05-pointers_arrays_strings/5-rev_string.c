#include <string.h>
#include "main.h"

/**
 * rev_string - reverses string
 * @s: string
 */
void rev_string(char *s)
{
	int len = strlen(s);
	int i;

	for (i = len; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
