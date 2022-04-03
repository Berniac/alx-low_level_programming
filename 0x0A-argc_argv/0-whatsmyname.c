#include <stdio.h>

/**
 * main - prints program name and new line
 * @argc: number of command line arguments
 * @argv: command line arguments array
 * Return: 0 on success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
