#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
* print_strings - Prints a series of strings in a variadic list.
* @separator: A string to be printed between the string elements.
* @n: The counter at the head of the list.
*
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	char *string;
	unsigned int i;

	va_start(ap, n);
	for (i = 1; i <= n; i++)
	{
		string = va_arg(ap, char *);
		if (string == NULL)
			printf("(nil)");
		else
			printf("%s", string);
		if (i < n && separator != NULL)
		printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
