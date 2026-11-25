#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Entry point.
 *
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line argument strings.
 * Selects operator for operation by
 * calling atoi to convert  user_input text to int operator.
 *
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int int1, int2;
	int (*opPoint)(int, int);
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((argv[2][0] == '/' || argv[2][0] == '%')
		&& atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}
	int1 = atoi(argv[1]);
	int2 = atoi(argv[3]);
	opPoint = get_op_func(argv[2]);
	result = opPoint(int1, int2);
	printf("%d\n", result);
	return (0);
}
