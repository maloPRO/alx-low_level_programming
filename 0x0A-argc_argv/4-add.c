#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

/**
* main - entry point
* @argc: arg coount
* @argv: arg vector
* Return: 0
*/
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;
	int num;

	for (i = 1; i < argc; i++)
	{
		int arg_len = strlen(argv[i]);
		int j;

		for (j = 0; j < arg_len; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		num = atoi(argv[i]);
		if (num <= 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
