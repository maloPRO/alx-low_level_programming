#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always 0
 */
int main(void)
{
	int n = 0;

	do {
		putchar(n + '0');
		n++;
	} while (n < 10);
	putchar('\n');
}
