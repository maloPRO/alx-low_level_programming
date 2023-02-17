#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int n = 0;
	char comma = ',';
	char space = ' ';

	while (n < 10)
	{
		if (n != 9)
		{
			putchar(n + '0');
			putchar(comma);
			putchar(space);
		}
		else
		{
			putchar(n + '0');
		}
		n++;
	}
	return (0);

}
