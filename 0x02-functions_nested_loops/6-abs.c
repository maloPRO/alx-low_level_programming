#include "main.h"

/**
 * _abs -  gets absolute value
 *
 * @n: value to be checked
 *
 * Return: value
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	} else if (n == 0)
	{
		return (0);
	}
	return (n);
}
