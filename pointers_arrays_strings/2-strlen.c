#include "main.h"
/**
 * _strlen - Returns the length of a string.
 * @s: String whose length is calculated.
 *
 * Description: Returns the length of a string.
 *
 * Return: Length of the string.
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
