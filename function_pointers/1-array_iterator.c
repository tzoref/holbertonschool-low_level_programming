#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - Executes a function on each element of an array.
 *@array: The array to iterate over.
 *@size: The number of elements in the array.
 *@action: The function to be executed.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
