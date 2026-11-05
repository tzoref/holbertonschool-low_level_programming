#include "main.h"

/**
 * print_line - Prints a line of underscores
 * @n: Number of underscores
 */
void print_line(int n)
{
	int i;

	i = 1;
	while (i <= n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
