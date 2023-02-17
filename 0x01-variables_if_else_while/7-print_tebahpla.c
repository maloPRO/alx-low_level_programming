#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always 0
 */
int main(void)
{
	char letter = 'z';

	do {
		putchar(letter);
		letter--;
	} while (letter >= 'a');
	putchar('\n');
	return (0);
}
