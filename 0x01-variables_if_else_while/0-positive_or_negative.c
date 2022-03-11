#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints a number and whether it is
 *        and whether it is positive, negative or zero
 *
 * Return: Always 0 
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
  
	if (n > 0){
		printf("%d is positive\n", n);
	}else if (n < 0){
		printf("%d is negative\n", n);
	}else {
		printf("%d is zero\n", n);
	}

	return (0);
}
