#include <stdlib.h>
#include "main.h"

/**
 * _calloc - Allocates memory for an array with malloc.
 * @nmemb: Number of elements in the array.
 * @size: The bytes of each element.
 *
 * Description: Allocates memory for an array of
 * nmemb elements of size bytes each.
 *
 * Return: Pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < nmemb * size)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
