#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords
 * Return: Always 0
 */
int main(void)
{
	int ri = 0, cp = 0;
	time_t t;

	srand((unsigned int) time(&t));
	while (cp < 2772)
	{
		ri = rand() % 128;
		if ((ri + cp) > 2772)
			break;
		cp += ri;
		printf("%c", ri);
	}
	printf("%c\n", (2772 - cp));
	return (0);
}
