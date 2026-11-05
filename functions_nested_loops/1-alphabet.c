#include "main.h"

/**
 * print_alphabet - Prints the lowercase alphabet
 */
void print_alphabet(void)
{
	int ch;

	ch = 97;

	while (ch <= 122)
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
