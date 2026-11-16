#include <stdlib.h>
#include "main.h"
/**
 * create_array - Creates an array of characters.
 * @size: The number of elements.
 * @c: The character used to initialize each element.
 *
 * Description: Creates an array of specified size,
 * initialized with c.
 *
 * Return: a pointer to the array or NULL if the function fails.
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	i = 0;
	if (size == 0)
		return (NULL);
	array = malloc(size * sizeof(char));
	if (array == NULL)
		return (NULL);
	while (i < size)
	{
		array[i] = c;
		i++;
	}
	return (array);
}
