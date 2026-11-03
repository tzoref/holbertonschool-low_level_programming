#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print hexadecimal digits from 0 to f
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 48;
	int ch = 97;

	while (n <= 57)
	{
		putchar(n);
		n++;
	}
	while (ch <= 102)
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
