#include "main.h"
/**
 * rev_string - Reverses  a string.
 * @s: String to be printed in reversed.
 *
 * Description: Reverses a string.
 *
 */
void rev_string(char *s)
{
	int i;
	int j;
	char c;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	while (j < i)
	{
		c = s[j];
		s[j] = s[i];
		s[i] = c;
		i--;
		j++;
	}
}
