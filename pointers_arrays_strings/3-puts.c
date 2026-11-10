#include "main.h"
/**
 * _puts - Prints string input.
 *@str: String to be printed.
 *
 * Description: Prints a string to stdout.
 *
 */
void _puts(char *str)
{
	int i;


	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}	_putchar('\n');
}
