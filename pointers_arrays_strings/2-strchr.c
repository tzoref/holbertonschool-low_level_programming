#include "main.h"
#include <stddef.h>
/**
 * _strchr - Locates a character in a string.
 *@s: String to be checked for location of character.
 *@c: Character to be located.
 *
 * Description: Locates the first occurence of a character in a string.
 *
 * Return: A pointer to the first occurrence of the character
 * or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
		if (s[i] == c)
			return (&s[i]);
	return (NULL);
}
