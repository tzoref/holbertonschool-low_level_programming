#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print single-digit numbers from 0 to 9
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch = 48;

	while (ch <= 57)
	{
		putchar(ch);
	ch++;
	}
	putchar('\n');
	return (0);
}
