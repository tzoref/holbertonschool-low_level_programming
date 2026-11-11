#include "main.h"
/**
 * _atoi - Converts an ascii string to an integer.
 * @s: The string to be converted to an integer.
 *
 * Description: Converts an ascii string to an integer.
 *
 * Return: The integer value of the string.
 */
int _atoi(char *s)
{
	int n;  /* number to return */
	int i;  /* counter */
	/*int sign;*/
	int digit;

	/*sign = 1;*/
	n = 0;
	i = 0;
	digit = 0;
	while (s[i] != '\0')
	{
		while  (s[i] >= '0' && s[i] <= '9')
		{
			n = n * 10 + (s[i] - '0');
			i++;
			digit++;
		}
		if (digit > 0)
			return (n);
		i++;
	}
	return (n);
}
