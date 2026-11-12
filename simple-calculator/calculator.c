#include <stdio.h>
/**
 * main - Entry Point
 *
 * Description: Prints a welcome message and interactive menu skeleton
 * for a simple calculator program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int choice;

	printf("Welcome to the Simple Calculator!\n");
	printf("1) Add\n");
	printf("2) Subtract\n");
	printf("3) Multiply\n");
	printf("4) Divide\n");
	printf("0) Quit\n");
	printf("Choice: \n");
	scanf("%d\n", &choice);
	if (choice == 0)
	{
		printf("Bye!\n");
		return (0);
	}
	return (0);
}
