#include "../functions_nested_loops/main.h"
#include <stdio.h>

/**
 * _memset - function that fills memory with a constant byte
 * @s: pointer to the memory area
 * @b: constant byte to fill the memory area
 * @n: number of bytes to be filled
 *
 * Return: Always 0 (Success)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
