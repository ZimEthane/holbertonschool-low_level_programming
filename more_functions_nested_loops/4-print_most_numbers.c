#include "../functions_nested_loops/main.h"
#include <stdio.h>

/**
 * print_numbers - function multiplies two integers
 *
 *
 * Return: Always 0 (Success)
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i <= 1 || i == 3 || i <= 9)
		{

			_putchar('0' + i);
		}
	}
	_putchar('\n');
}
