#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Duplicates a string into newly allocated memory.
 * @str: The string to be copied.
 *
 * Description: Duplicates a string into newly allocated memory.
 *
 * Return: Pointer to address of the new copy of the string,
 * or NULL if string is NULL.
 */
char *_strdup(char *str)
{
	int len;
	char *copy;
	int i;

	len = 0;
	if (str == NULL)
		return (NULL);
	while (str[len] != '\0')
	{
		len++;
	}
	copy = malloc((len + 1) * sizeof(char));
	if (copy == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		copy[i] = str[i];
		i++;
	}
	copy[len] = '\0';
	return (copy);
}
