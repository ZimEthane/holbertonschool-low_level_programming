#include "../functions_nested_loops/main.h"
#include <stdio.h>

/**
 * factorial - function that returns the factorial of a given number
 * @n: integer number
 *
 * Return: factorial of n
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
