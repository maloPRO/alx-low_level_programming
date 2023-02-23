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
			int digit1 = j / 10;
			int digit2 = j % 10;

			if (digit1 != 0)
			{
				_putchar(digit1 + '0');
			}
			_putchar(digit2 + '0');
			j++;
		}
		_putchar('\n');
		i++;
	}

}
