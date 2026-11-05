#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int row;
	int col;
	int product;

	row = 0;
	while (row <= 9)
	{
		col = 0;
		while (col <= 9)
		{
			product = row * col;
			if (product >= 10)
				_putchar((product / 10) + '0');
			else if (col != 0)
				_putchar(' ');
			_putchar((product % 10) + '0');
			if (col < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			col++;
		}
		_putchar('\n');
		row++;
	}
}
