#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int x;
	int y;
	int mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	x = atoi(argv[1]);
	y = atoi(argv[2]);
	mul = x * y;
	printf("%d\n", mul);
	return (0);
}
