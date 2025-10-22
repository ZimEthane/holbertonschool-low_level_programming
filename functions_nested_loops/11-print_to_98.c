#include "main.h"

/**
 * print_to_98 - check the code.
 * @n: The number to start from
 *
 * Return: Always 0.
 */
void print_to_98(int n)
{
while (n < 98)
{
_putchar(n / 10 + '0');
_putchar(n % 10 + '0');
_putchar(',');
_putchar(' ');
n++;
}
while (n > 98)
{
_putchar(n / 10 + '0');
_putchar(n % 10 + '0');
_putchar(',');
_putchar(' ');
n--;
}
_putchar('9');
_putchar('8');
_putchar('\n');
}
