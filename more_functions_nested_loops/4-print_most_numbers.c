#include "../functions_nested_loops/main.h"
#include <stdio.h>

/**
 * print_most_numbers - function multiplies two integers
 *
 *
 * Return: Always 0 (Success)
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		switch (i)
		{
			case 2:
			case 4:
				break;
			default:
				_putchar('0' + i);
		}
	}
	_putchar('\n');
}
