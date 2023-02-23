#include "main.h"

/**
 * print_triangle - prints triangle
 * @size: size of triangle
 */
void print_triangle(int size)
{
	if (size > 0)
	{
		int i, j, k;

		for (i = 1; i <= size; i++)
		{
			for (j = size; j > i; j--)
			{
				_putchar(' ');
			}
			for (k = 1; k <= i; k++)
			{
				_putchar('#');
			}
		_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
