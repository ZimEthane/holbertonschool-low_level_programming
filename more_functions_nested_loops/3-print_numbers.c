#include <stdio.h>

/**
 * print_numbers - function multiplies two integers
 *
 *
 * Return: Always 0 (Success)
 */

void print_numbers(void)
{
	for (int i = 0; i <= 9; i++)
	{
		_putchatr(i + '0');
		}
	_putchatr('\n');
}
