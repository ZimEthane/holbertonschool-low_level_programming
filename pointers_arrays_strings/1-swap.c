#include "../functions_nested_loops/main.h"
#include <stdio.h>

/**
 * swap_int - function that swaps the values of two integers
 * @a: pointer to an integer
 * @b: pointer to an integer
 *
 * Return: Always 0 (Success)
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
