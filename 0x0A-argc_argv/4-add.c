#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: number of arguments passed
 * @argv: array of arguments passed
 * Return: 0 on success, 1 otherwise
 */
int main(int argc, char *argv[])
{
	int i = 1, sum = 0;

	for (; i < argc; i++)
	{
		if (!(argv[i] >= 48 && argv[i] <= 57))
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += atoi(argv[i]);
			printf("%d\n", sum);
			return (0);
		}
	}
}
