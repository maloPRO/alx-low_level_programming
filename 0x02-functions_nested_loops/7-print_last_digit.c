#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 *
 * @n: number to be checked
 *
 * Return: Last digit
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		return (-(n % 10));
	}
	return (n % 10);
}
