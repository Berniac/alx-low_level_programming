#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints opcodes of its own main function
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	char *opc = (char *) main;
	int i, count;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	count = atoi(argv[1]);

	if (count < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < count; i++)
	{
		printf("%02x", opc[i] & 0xFF);
		if (i != count - 1)
			printf(" ");
	}

	printf("\n");
	return (0);
}
