#include <stdio.h>

/**
 * print_alphabet - prints letters
 *
 */
void print_alphabet(void);

/**
 * main - Entry point
 *
 * Return: always 0
 *
 */
int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
}
