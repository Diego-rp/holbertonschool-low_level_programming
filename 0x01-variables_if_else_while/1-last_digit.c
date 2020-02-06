#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int ultimo;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ultimo = n % 10;
	ultimo = abs(ultimo);
	if (ultimo == 0)
		printf("Last digit of %d is %d and is 0\n", n, ultimo);
	else if (ultimo > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, ultimo);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ultimo);
	return (0);
}
