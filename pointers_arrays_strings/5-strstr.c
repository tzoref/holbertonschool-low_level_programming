#include "main.h"
#include <stddef.h>

/**
 * _strstr - Locates a substring in a string.
 * @haystack: String to search.
 * @needle: Substring to find.
 *
 * Return: Pointer to the first occurrence, or NULL.
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;
	int k;

	if (needle[0] == '\0')
		return (haystack);

	i = 0;
	while (haystack[i] != '\0')
	{
		j = 0;
		k = i;

		while (needle[j] != '\0' &&
		       haystack[k] != '\0' &&
		       haystack[k] == needle[j])
		{
			j++;
			k++;
		}

		if (needle[j] == '\0')
			return (&haystack[i]);

		i++;
	}
	return (NULL);
}
