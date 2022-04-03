#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints minimum num of coins to
 * make change for an amount of money
 * @argc: number of arguments
 * @argv: array of names of arguments
 * Return: 0 - success
 */
int main(int argc, char *argv[])
{
	int amt, count = 0;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}

	amt = atoi(argv[1]);

	while (amt > 0)
	{
		if (amt >= 25)
			amt -= 25;
		else if (amt >= 10)
			amt -= 10;
		else if (amt >= 5)
			amt -= 5;
		else if (amt >= 2)
			amt -= 2;
		else if (amt >= 1)
			amt -= 1;
		count += 1;
	}
	printf("%d\n", count);
	return (0);
}
