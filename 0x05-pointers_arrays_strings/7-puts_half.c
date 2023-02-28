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

	if (len % 2 == 0)
	{
		for (i = 0; i < len; i++)
		{
			if (i >= mid)
			{
				putchar(str[i]);
			}
		}
	}
	else
	{
		for (i = 0; i < len; i++)
		{
			if (i > mid)
			{
				putchar(str[i]);
			}
		}
	}
	putchar('\n');
}
