#include "main.h"

/**
 * reverse_array - Reverses an array of integers.
 * @a: Array of integers to reverse.
 * @n: Number of elements in the array.
 *
 * Description: Reverses the elements of an integer array in place.
 *
 * Return: Nothing.
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;
	int c;

	i = n - 1;
	j = 0;
	while (j < i)
	{
		c = a[j];
		a[j] = a[i];
		a[i] = c;
		i--;
		j++;
	}
}

