#include <stdlib.h>
#include "main.h"

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string to be concatenated.
 * @s2: The second string to be concatenated.
 *
 * Description: Concatenates two strings into newly allocated memory.
 *
 * Return: A pointer to a newly allocated space in memory
 * containing the two concatenated strings,
 * or NULL if memory allocation fails.
 */
char *str_concat(char *s1, char *s2)
{
	int len1;
	int len2;
	int i;
	int j;
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
	result = malloc((len1 + len2 + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	while (i < len1)
	{
		result[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < len2)
	{
		result[i] = s2[j];
		i++;
		j++;
	}
	result[i] = '\0';
	return (result);
}
