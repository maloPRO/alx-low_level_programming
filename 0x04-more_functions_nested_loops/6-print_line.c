#include "main.h"

/**
 * print_line - prints straight line on terminal
 * @n: lengt of line
 */
void print_line(int n)
{
	int i;
	
	for (i = 0; i < n; i++)
	{
		_putchar('_');

	}
	_putchar('\n');
}
