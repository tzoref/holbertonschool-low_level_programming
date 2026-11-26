#include <stdio.h>
#include "main.h"

/**
 * main - Prints the number of arguments
 * @argc: Argument count
 * @argv: Array of argument strings
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}
