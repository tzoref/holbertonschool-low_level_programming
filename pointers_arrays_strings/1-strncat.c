#include "main.h"
/**
 * _strncat - Concatenates two strings.
 * @dest: Destination string
 * @src: Source string
 * @n: Maximum number of bytes to append to the documentation.
 *
 * Description: Appends the source string to the destination string.
 *
 * Return: The concatenated string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i; /*index for dest*/
	int j; /*index for source*/

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
