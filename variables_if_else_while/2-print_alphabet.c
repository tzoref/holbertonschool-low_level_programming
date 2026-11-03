#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print lowercase letters from a to z
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch = 97;

	while (ch <= 122)
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
