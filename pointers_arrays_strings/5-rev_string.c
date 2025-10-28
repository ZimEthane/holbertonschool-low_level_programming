#include "../functions_nested_loops/main.h"
#include <stdio.h>

/**
 * rev_string - function that reverses a string
 * @s: pointer to a string
 *
 *
 * Return: Always 0 (Success)
 */

void rev_string(char *s)
{
	int i, j, lenght;
	char temps;

	lenght = 0;

	while (s[lenght] != '\0')
	{
		lenght++;
	}

	j = lenght - 1;

	for (i = 0; i < j; i++, j--)
	{
		temps = s[i];
		s[i] = s[j];
		s[j] = temps;
	}
}
