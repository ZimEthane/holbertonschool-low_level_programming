#include "../functions_nested_loops/main.h"
#include <stdio.h>

/**
 * _strlen - function that returns the length of a string
 * @s: pointer to a string
 * 
 *
 * Return: Always 0 (Success)
 */

int _strlen(char *s)
{
	int lenght = 0;
	while (s[lenght] != '\0')
	{
		lenght++;
	}
	return (lenght);
}
