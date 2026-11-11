#include "main.h"
/**
 * _strncpy - Copies n characters from a string.
 * @dest: Destination string.
 * @src: Source string.
 * @n: Number of characters to copy.
 *
 * Description: Copies a specified number of characters from a string.
 *
 * Return: The copied string.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
