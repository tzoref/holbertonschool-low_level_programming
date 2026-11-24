#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - Searches for an integer in an array.
 * @array: The integer array to be searched.
 * @size: The number of elements in the array.
 * @cmp: Pointer to the comparison function.
 *
 * Return: Index of first match, or -1 if no match or size <= 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0 || array == NULL || cmp == NULL)
	{
		return (-1);
	}
	while (i < size)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}
