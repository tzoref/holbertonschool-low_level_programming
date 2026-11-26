#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
* print_numbers - Prints a series of numbers in a variadic list.
* @separator: A string to be printed between the numbers.
* @n: The counter at the head of the va_list.
*
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	int num;
	unsigned int i;

	va_start(ap, n);
	for (i = 1; i <= n; i++)
	{
		num = va_arg(ap, int);
		printf("%d", num);
		if (i < n && separator != NULL)
			printf("%s", separator);
		}
	printf("\n");
	va_end(ap);
}
