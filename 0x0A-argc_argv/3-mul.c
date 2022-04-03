#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies 2 numbers
 * @argc: number of arguments passed
 * @argv: array of arguments passed
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, prod = 1;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
			prod *= atoi(argv[i]);
		printf("%d\n", prod);
	}
	else
		printf("Error\n");
	return (0);
}
