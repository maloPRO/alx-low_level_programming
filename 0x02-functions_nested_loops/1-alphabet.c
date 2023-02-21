#include <stdio.h>

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

/**
 * print_alphabet - prints alphabets
 *
 */
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
