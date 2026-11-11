#include "main.h"
/**
 * leet - Encrypts a string.
 * @s: String to be encrypted.
 *
 * Description: Encodes a string into 1337.
 *
 *
 * Return: Encoded string.
 */
char *leet(char *s)
{
	int i;
	/* set arrays to match letter indices to corresponding number indices */
	char letters[11] = "aeotlAEOTL";
	char numbers[11] = "4307143071";
	int j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (j < 10)
		{
			if (s[i] == letters[j])
				s[i] = numbers[j];
			j++;
		}
		i++;
	}
	return (s);
}
