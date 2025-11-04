#include "../functions_nested_loops/main.h"
#include <stdio.h>

/**
 * _puts_recursion - function that prints a string followed by a new line
 * @s: pointer to a string
 *
 * Return: Always 0 (Success)
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
