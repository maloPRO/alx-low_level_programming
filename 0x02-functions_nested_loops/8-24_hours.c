#include "main.h"

/**
 * jack_bauer - prints minutes
 *
 * @hour - hours
 *
 * @min - minutes
 *
 * Return: time
 */
void jack_bauer(void)
{
	int hour, min;

	for (hour = 0; hour < 24; hour++)
	{
		for (min = 0; min < 60; min++)
		{
			_putchar(hour + '0');
			_putchar(min + '0');
			_putchar('\n');
		}
	}
}
