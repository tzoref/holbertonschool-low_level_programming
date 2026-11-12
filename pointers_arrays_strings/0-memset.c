#include "main.h"
/**
 * _memset - Fills memory with a constant byte.
 *@s: The address to hold the constant byte.
 *@b: The constant byte.
 *@n: The number of memory bytes to be filled.
 *
 * Description: Fills the first n bytes of the memory area.
 * pointed to by s with the constant byte b.
 *
 * Return: Pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
