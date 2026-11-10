#include "main.h"
#include <stdio.h>
/**
 * print_array - Prints n elements of an array.
 * @a: Pointer to the integer array.
 * @n: Number of elements of the array to be printed.
 *
 * Description: Prints n elements of an array,
 * delimited by a comma and a space.
 *
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		printf("%d", a[i]);
		i++;
		if (i < n)
			printf(", ");
	}
	printf("\n");
}
