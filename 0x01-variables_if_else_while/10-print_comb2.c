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
	int m;

	for (n = '0' ; n <= '9' ; n++)
		for (m = '0' ; m <= '9' ; m++)
			{
			putchar(n);
			putchar(m);
			if ((n == '9') && (m == '9'))
				continue;
			putchar(',');
			putchar(' ');
			}
	putchar('\n');
	return (0);
}
