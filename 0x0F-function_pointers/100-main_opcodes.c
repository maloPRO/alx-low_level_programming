#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - prints opcodes
 * @num_bytes: number of bytes
 */
void print_opcodes(int num_bytes)
{
	int i;
	unsigned char *opcode_ptr = (unsigned char *) print_opcodes;

	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x", opcode_ptr[i]);
	}
	printf("\n");
}

/**
 * main - entry point
 * @argc: count
 * @argv: vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	int num_bytes = atoi(argv[1]);

	if (num_bytes <= 0)
	{
		printf("Error\n");
		return (2);
	}
	print_opcodes(num_bytes);
	return (0);
}
