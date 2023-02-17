#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints alphabets
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	char lower = 'a';
	char upper = 'A';

	do {
		putchar(lower);
		lower++;
	} while (lower <= 'z');

	do {
		putchar(upper);
		upper++;
	} while (upper <= 'Z');
	putchar('\n');
	return (0);
}
