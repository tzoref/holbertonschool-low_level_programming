#include "main.h"
/**
 * _strcpy - Copies a string to a buffer.
 * @dest: Pointer to the destination buffer.
 * @src: Pointer to the source string.
 *
 * Description: Copies a string pointed to by src
 * to the buffer pointed to by dest.
 *
 * Return: Pointer to  dest.
 */
char *_strcpy(char *dest, char *src)
{
	int len;

	len = 0;
	while (src[len] != '\0')
	{
		dest[len] = src[len];
		len++;
	}
	dest[len] = '\0';
	return (dest);
}
