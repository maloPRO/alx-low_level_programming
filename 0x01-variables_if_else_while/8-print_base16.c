#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always 0
 */
int main(void)
{
	int n = 0;
	char a = 'a';

	do {
		putchar(n + '0');
		n++;
	} while (n < 10);
	do {
		putchar(a);
		a++;
	} while (a < 'g');
	putchar('\n');
	return (0);
}
