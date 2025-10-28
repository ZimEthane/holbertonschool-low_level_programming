#include "../functions_nested_loops/main.h"
#include <stdio.h>

/**
 * puts_half - function that prints half of a string,
 * followed by a new line
 * @str: pointer to a string
 *
 *
 * Return: Always 0 (Success)
 */

void puts_half(char *str)
{
	int lenght = 0;

	int j ;

	while (str[lenght] != '\0')
	{
		lenght++;
	}
	
	if (lenght % 2 == 0)
	{
		for (j = lenght / 2; str[j] != '\0'; j++)
		{
			putchar(str[j]);
		}
		putchar('\n');
	}
	else
	{
		for (j = (lenght + 1) / 2; str[j] != '\0'; j++)
		{
			putchar(str[j]);
		}
		putchar('\n');
	}
}
