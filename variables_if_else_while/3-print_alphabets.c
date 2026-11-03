#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print lowercase and uppercase alphabets
 * Return: Always 0 (Success)
 */
int main(void)
{
	int lower = 97;
	int upper = 65;

	while (lower <= 122)
	{
		putchar(lower);
		lower++;
	}
	while (upper <= 90)
	{
		putchar(upper);
		upper++;
	}
	putchar('\n');

	return (0);
}
