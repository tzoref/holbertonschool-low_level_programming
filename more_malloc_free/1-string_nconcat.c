#include <stdlib.h>
#include "main.h"

#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 * @n: Maximum number of bytes to copy from s2.
 *
 * Description: Allocates memory for s1 followed by
 * up to n bytes of s2, and a null terminator.
 *
 * Return: Pointer to the new string, or NULL on failure.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1;
	unsigned int len2;
	unsigned int i;
	unsigned int j;
	char *result;

	len1 = 0;
	len2 = 0;
	i = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
	{
		len1++;
	}

	while (s2[len2] != '\0')
	{
		len2++;
	}

	if (n > len2)
	{
		n = len2;
	}

	result = malloc((len1 + n + 1) * sizeof(char));

	if (result == NULL)
		return (NULL);

	while (i < len1)
	{
		result[i] = s1[i];
		i++;
	}

	j = 0;

	while (j < n)
	{
		result[i] = s2[j];
		i++;
		j++;
	}

	result[i] = '\0';

	return (result);
}
