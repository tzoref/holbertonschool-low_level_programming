#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: String containing the substring.
 * @accept: Set of characters allowed in the initial segment.
 *
 * Description: Counts the initial consecutive characters in s
 * that belong to the set of characters in accept.
 *
 * Return: Number of bytes in the initial segment.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int len;

	i = 0;
	len = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0' && s[i] != accept[j])
		{
			j++;
		}
		if (accept[j] == '\0')
			return (len);
		len++;
		i++;
	}
	return (len);
}
