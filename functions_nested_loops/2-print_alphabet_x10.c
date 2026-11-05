#include "main.h"

/**
 * print_alphabet_x10 - Prints the lowercase alphabet 10 times
 */
void print_alphabet_x10(void)
{
	int ch;
	int count;

	count = 0;
	while (count < 10)
	{
		ch = 97;
		while (ch <= 122)
{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		count++;
	}
}
