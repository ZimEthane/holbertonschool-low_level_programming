#include "../functions_nested_loops/main.h"
#include <stdio.h>

/**
 * print_diagonal - function multiplies two integers
 * @n: number of times the character _ should be printed
 *
 * Return: Always 0 (Success)
 */

void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
