#include <stdio.h>
#include <string.h>

/**
 * puts_half - prints half a string
 * @str: string
 */
void puts_half(char *str)
{
	int len = strlen(str);
	int i;
	int mid = len / 2;

	for (i = 0; i < len; i++)
	{
		if (i >= mid)
		{
			putchar(str[i]);
		}
	}
	putchar('\n');
}
