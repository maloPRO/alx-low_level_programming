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
	int mid;
	if (len % 2 != 0)
	{
		mid = (len - 1) / 2;
	}
	else
	{
		mid = len / 2;
	}
	for (i = 0; i < len; i++)
	{
		if (i >= mid)
		{
			putchar(str[i]);
		}
	}
	putchar('\n');
}
