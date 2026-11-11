#include "main.h"
/**
 * cap_string - Converts a string to title case.
 * @s: String to conver to title case.
 *
 * Description: Capitalizes all words of a string.
 *
 * Return: The string with all words capitalized.
 */
char *cap_string(char *s)
{
	int i;

	i = 0;
	if (s[i] != '\0')
	{
		if (s[i] >= 97 && s[i] <= 122)
			s[i] -= 32;
	}
	while (s[i] != '\0')
	{
		if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' ||
			s[i] == ',' || s[i] == ';' || s[i] == '.' ||
			s[i] == '!' || s[i] == '?' || s[i] == '"' ||
			s[i] == '(' || s[i] == ')' || s[i] == '{' ||
			s[i] == '}')
		{
			if (s[i + 1] >= 97 && s[i + 1] <= 122)
				s[i + 1] -= 32;
		}
		i++;
	}
	return (s);
}
