#include "../functions_nested_loops/main.h"
#include <stdio.h>

/**
 * FizzBuzz - function that prints the numbers from 1 to 100
 *
 *
 * Return: Always 0 (Success)
 */

int FizzBuzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3)
		{
			printf("Fizz");
		}
		else if (i % 5)
		{
			printf("Buzz");
		}
		else
		{
			_putchar(i + '0');
		}
	}
}
