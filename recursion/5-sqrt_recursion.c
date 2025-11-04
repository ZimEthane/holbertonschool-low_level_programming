#include "../functions_nested_loops/main.h"
#include <stdio.h>

/**
 * _sqrt_helper - helper function to find the square root
 * @n: integer to find the square root of
 *
 * Return: square root of n or -1 if not a perfect square
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt_helper(n, 0));
}
