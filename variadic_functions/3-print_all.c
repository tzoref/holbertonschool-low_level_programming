#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"


/**
 * print_char - Prints a character.
 * @ap: Variadic argument list.
 */
void print_char(va_list *ap)
{
	printf("%c", va_arg(*ap, int));
}

/**
 * print_int - Prints an integer.
 * @ap: Variadic argument list.
 */
void print_int(va_list *ap)
{
	printf("%d", va_arg(*ap, int));
}

/**
 * print_float - Prints a floating-point number.
 * @ap: Variadic argument list.
 */
void print_float(va_list *ap)
{
	printf("%f", va_arg(*ap, double));
}

/**
 * print_string - Prints a string.
 * @ap: Variadic argument list.
 */
void print_string(va_list *ap)
{
	char *str = va_arg(*ap, char *);

	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}

/**
 * print_all - Prints arguments according to their types.
 * @format: String specifying argument types.
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	unsigned int i = 0, j;
	char *separator = "";
	print_type_t types[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}
	};

	va_start(ap, format);
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (types[j].type != '\0')
		{
			if (format[i] == types[j].type)
			{
				printf("%s", separator);
				types[j].f(&ap);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	va_end(ap);
	printf("\n");
}
