#include "main.h"
/**
 * string_toupper - Converts a string to uppercase
 * @s: String to convert to uppercase.
 *
 * Description: Converts a lowercase string to uppercase
 *
 * Return: Pointer to the converted string.
 */
char *string_toupper(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] >= 97 && s[i] <= 122)
			s[i] -= 32;
		i++;
	}
	return (s);
}
