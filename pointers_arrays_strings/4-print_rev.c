#include "../functions_nested_loops/main.h"
#include <stdio.h>

/**
 * print_rev - function that prints a string, in reverse, followed by a new line
 * @s: pointer to a string
 *
 *
 * Return: Always 0 (Success)
 */

void print_rev(char *s)
{
	int lenght = 0;
	int i;

	while (s[lenght] != '\0')
	{
		lenght++;
	}

	for (i = lenght - 1 ; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
