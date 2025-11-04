#include "../functions_nested_loops/main.h"
#include <stdio.h>

/**
 * _sqrt_helper - helper function to find the square root
 * @n: number to find the square root of
 * @guess: current guess for the square root
 *
 * Return: square root of n or -1 if n has no natural square root
 */
int _sqrt_helper(int n, int guess)
{
	if (guess * guess == n)
	{
		return (guess);
	}
	else if (guess * guess > n)
	{
		return (-1);
	}
	return (_sqrt_helper(n, guess + 1));
}
