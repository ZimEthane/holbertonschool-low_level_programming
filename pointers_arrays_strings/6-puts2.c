#include "../functions_nested_loops/main.h"
#include <stdio.h>

/**
 * puts2 - function that prints every other character of a string,
 * starting with the first character, followed by a new line
 * @str: pointer to a string
 *
 *
 * Return: Always 0 (Success)
 */

void puts2(char *str)
{
	int i, j, lenght;

	lenght = 0;

	while (str[lenght] != '\0')
	{
		lenght++;
	}

	j = lenght - 1;

	for (i = 0; i <= j; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
