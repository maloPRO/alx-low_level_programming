#include <stdio.h>

void fizzBuzz(void);

/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	fizzBuzz();
	printf("\n");
	return (0);
}

/**
 * fizzBuzz - prints numbers 0 - 100
 */
void fizzBuzz(void)
{
	int i;

	for (i = 1; i < 100; i++)
	{
		if (i % 15 == 0)
		{
			printf("FizzBuzz\t");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz\t");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz\t");
		}
		else
		{
			printf("%d\t", i);
		}
	}
}
