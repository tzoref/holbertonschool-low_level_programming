#include "main.h"
/**
 * puts_half - Prints half of a string.
 * @str: String to be printed halfway.
 *
 * Description: Prints the second half of a string.
 *
 */
void puts_half(char *str)
{
	int n;
	int len;

	len = 0;
	while (str[len] != '\0')
		len++;
	if (len % 2 == 0)
		n = len / 2;
	else
		n = (len + 1) / 2;
	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
