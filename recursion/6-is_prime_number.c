#include "../functions_nested_loops/main.h"
#include <stdio.h>

/**
 * is_prime_number - function that returns 1 if the input integer
 * is a prime number, otherwise return 0
 * @n: number to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}
	if (n % 2 == 0)
	{
		return (0);
	}
	return (is_prime_number(n - 1) && (n % (n - 1) != 0));	
}
