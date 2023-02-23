#include <stdio.h>

void fizzBuzz(void);

/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	fizzBuzz();
	return (0);
}

/**
 * fizzBuzz - prints numbers 0 - 100
 */
void fizzBuzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz\n");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz\n");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz\n");
		}
		else
		{
			printf("%d\n", i);
		}
	}
}

