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
	int m;
	int n = '1';

	for (m = '0' ; m <= '9' ; m++)
		for (n = m + 1 ; n <= '9' ; n++)
			{
			putchar(m);
			putchar(n);
			if ((m == '8') && (n == '9'))
				continue;
			putchar(',');
			putchar(' ');
			}
	putchar('\n');
	return (0);
}
