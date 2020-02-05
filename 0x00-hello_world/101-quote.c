#include <stdio.h>
#include <unistd.h>

/**
 * main -Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
if (write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59) != 59)
{
write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
return (-1);
}
return (0);
}
