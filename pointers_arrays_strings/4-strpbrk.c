#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - Locates the first occurrence of a substring in a string.
 * @s: String to search.
 * @accept: Characters to match.
 *
 * Description: Locates the first occurrence of a substring in a string.
 *
 * Return: A Pointer to the location of the substring.
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				return (&s[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
