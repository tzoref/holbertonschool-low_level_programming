#include "main.h"
/**
 * _strcat - Concatenates two strings.
 * @dest: Destination string
 * @src: Source string
 *
 * Description: Appends the source string to the destination string.
 *
 * Return: The concatenated string.
 */
char *_strcat(char *dest, char *src)
{	int i; /*index for dest*/
	int j; /*index for source*/

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
