#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints alphabet
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	char letter = 'a';

	do {
		putchar(letter);
		letter++;
	} while (letter <= 'z');
	putchar('\n');
	return (0);
}
