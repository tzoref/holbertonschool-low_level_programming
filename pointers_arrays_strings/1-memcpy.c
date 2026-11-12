#include "main.h"
/**
 * _memcpy - copies n bytes from a source memory area to a destination.
 *@src: Pointer to source.
 *@dest: Pointer to destination.
 *@n: Number of bytes to copy.
 *
 * Description: Copies n bytes from memory area src to memory area dest.
 *
 * Return: Destination.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
