#include <stdlib.h>
#include "main.h"

/**
 * array_range - Creates an array of integers.
 * @min: Lowest value in the array.
 * @max: Highest value in the array.
 *
 * Description: Creates an array of values
 * in the range of min to max.
 *
 * Return: Pointer to the array.
 */
int *array_range(int min, int max)
{
	int *array;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	array = malloc((max - min + 1) * sizeof(int));
	if (array == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < max - min + 1)
	{
		array[i] = min + i;
		i++;
	}
	return (array);
}
