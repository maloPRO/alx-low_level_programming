#include "main.h"

/**
 * print_square - prints squares
 * @size: size of square
 *
 */
void print_square(int size)
{
	if (size > 0)
	{
		int i = 0;

		while (i < size)
		{
			int j = 0;

			while (j < size)
			{
				_putchar('#');
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
	else if (size <= 0)
	{
		_putchar('\n');
	}
}
