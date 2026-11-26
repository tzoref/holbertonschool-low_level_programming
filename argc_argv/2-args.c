#include <stdio.h>
#include "main.h"

/**
 * main - Prints all received arguments.
 * @argc: Number of arguments.
 * @argv: Array of argument strings.
 *
 * Return: Always 0(Success)
 */
int main(int argc, char *argv[])
{
	int i;

	i = 0;
	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
