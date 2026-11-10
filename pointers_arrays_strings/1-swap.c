#include "main.h"

/**
 * swap_int - Swaps the value of 2 integers
 * @a: Pointer to the first integer
 * @b: Pointer to the second integer
 * Description: Swaps the value of 2 integers
 *
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
