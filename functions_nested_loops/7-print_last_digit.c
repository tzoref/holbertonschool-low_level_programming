#include "main.h"

/**
 * print_last_digit - Prints the last digit of an integer
 * @n: Integer to examine
 *
 * Return: Value of the last digit
 */
int print_last_digit(int n)
{
	int digit;

	digit = n % 10;
	if (digit < 0)
	{
		digit = -digit;
	}
	_putchar(digit + '0');
	return (digit);
}
