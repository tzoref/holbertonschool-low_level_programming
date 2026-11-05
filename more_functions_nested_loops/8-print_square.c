#include "main.h"

/**
 * print_square - Prints a square of hash characters
 * @size: Width and height of the square
 */
void print_square(int size)
{
	int row;
	int col;

	for (row = 0; row < size; row++)
	{
		for (col = 0; col < size; col++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
