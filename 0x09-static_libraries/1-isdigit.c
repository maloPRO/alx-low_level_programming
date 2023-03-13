#include "main.h"

/**
 * _isdigit-checks for numbers
 * @c: number to be tested
 * Return: 1 if true
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
