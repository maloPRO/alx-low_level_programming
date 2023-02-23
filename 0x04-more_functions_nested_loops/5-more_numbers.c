#include "main.h"

/**
 * more_numbers - prints 1-14 10 times
 */
void more_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		int j = 0;

		while (j < 15)
		{
			if (j >= 0 && j <= 9)
			{
				_putchar(j + '0');
			}
			else
			{
				_putchar(j / 10 + '0');
				_putchar(j % 10 + '0');
			}
			j++;
		}
		_putchar('\n');
		i++;
	}

}
