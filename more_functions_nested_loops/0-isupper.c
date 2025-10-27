#include "main.h"

/**
 * int _isupper(int c) - Entry point
 * @c - variable tester
 *
 * Return: Always 0 (Success)
 */

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
_putchar('%d', c);
_putchar(':');
_putchar(' ');
_putchar('1');
return (1);
}
else
{
_putchar('%d', c);
_putchar(':');
_putchar(' ');
_putchar('0');
return (0);
}
}
