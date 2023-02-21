#include "main.h"

/**
 * _islower - checks for lowercase letters
 *
 * @c: letter to be cheecked
 *
 * Return: 1 if true 0 if false
 *
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		_putchar(1 + '0');
	} else
	{
		_putchar(0 + '0');
	}
	return (0);
}
