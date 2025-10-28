#include "../functions_nested_loops/main.h"
#include <stdio.h>

/**
 * _puts - function that prints a string, followed by a new line, to stdout
 * @str: pointer to a string
 *
 *
 * Return: Always 0 (Success)
 */

void _puts(char *str)
{
	int i;
	i = 0;
	

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
