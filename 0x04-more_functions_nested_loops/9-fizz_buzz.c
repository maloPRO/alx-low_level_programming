#include <stdio.h>

void fizzBuzz(int n);

/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	fizzBuzz(100);
	printf("\n");
	return (0);
}

/**
 * fizzBuzz - prints numbers 0 - 100
 */
void fizzBuzz(int n)
{	
	int i;

	for (i = 1; i <= n; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
}
