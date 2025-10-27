#include "../functions_nested_loops/main.h"
#include <stdio.h>

/**
 * more_numbers - function multiplies two integers
 *
 *
 * Return: Always 0 (Success)
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{

			if (j >= 10)
			{
				_putchar('0' + (j / 10));
				_putchar('0' + (j % 10));
			}
		}
		_putchar('\n');
	}
}
