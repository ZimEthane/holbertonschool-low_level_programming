#include "../functions_nested_loops/main.h"
#include <stdio.h>

/**
 * print_square - function prints a square of size size
 * @size: size of the square
 *
 * Return: Always 0 (Success)
 */

void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
