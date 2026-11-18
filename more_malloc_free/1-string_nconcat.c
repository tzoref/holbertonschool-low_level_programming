#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings using at most n bytes of s2.
 * @s1: First string.
 * @s2: Second string.
 * @n: Maximum number of bytes to copy from s2.
 *
 * Return: Pointer to new string, or NULL on failure.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int len1 = 0, len2 = 0, i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1] != '\0')
		len1++;
	while (len2 < n && s2[len2] != '\0')
		len2++;
	result = malloc((len1 + len2 + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	while (i < len1)
	{
		result[i] = s1[i];
		i++;
	}
	while (j < len2)
		result[i++] = s2[j++];
	result[i] = '\0';
	return (result);
}
