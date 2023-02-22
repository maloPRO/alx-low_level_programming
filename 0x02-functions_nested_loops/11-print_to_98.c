#include "main.h"

/**
 * print_to_98 - prints from n to 98
 *
 * @n: value to start from
 *
 */
void print_to_98(int n)
{
	int i;

	if (n == 98)
	{
		_putchar(n + '0');
	} else if (n > 98)
	{
		for (i = n; i <= 98; i--)
		{
			_putchar(n + '0');
		}
	} else if (n < 98)
	{
		for (i = n; i >= 98; i++)
		{
			_putchar(n + '0');
		}
	}
}
