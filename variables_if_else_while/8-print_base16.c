#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char caracter = 'a';
	char number = '0';
	while (number <= '9')
	{
		putchar(number);
		number++;
	}
	while (caracter <= 'f')
	{
		putchar(caracter);
		caracter++;
	}
	printf("\n");
	return (0);
}
