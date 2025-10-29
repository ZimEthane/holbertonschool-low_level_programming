#include "../functions_nested_loops/main.h"
#include <stdio.h>

/**
 * _strncpy - function that concatenates two strings
 * @dest: pointer to destination string
 * @src: pointer to source string
 * @n: number of bytes to concatenate
 *
 * Return: Always 0 (Success)
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
