#include "main.h"

/**
 * print_diagonal - prints \ diagonally
 * @n: number of lines
 */
void print_diagonal(int n)
{
	if (n > 0)
	{
		int i = 0;

		while (i < n)
		{
			int j = 0;

			while (j < i)
			{
				_putchar(' ');
				j++;
			}
			_putchar('\\');
			_putchar('\n');
			i++;
		}
	}
	else if (n <= 0)
	{
		_putchar('\n');
	}
}
