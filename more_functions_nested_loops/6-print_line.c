#include "../functions_nested_loops/main.h"
#include <stdio.h>

/**
 * print_line - function multiplies two integers
 * @n: number of times the character _ should be printed
 *
 * Return: Always 0 (Success)
 */

void print_line(int n)
{
	for (int i = 0; i < n; i++)
	{
		if (n == 0)
		{
			_putchar('\n');
		}
		_putchar('_');
	}
	_putchar('\n');
}
