#include <stdio.h>
/**
 * main - Entry Point
 *
 * Description: Enables user to quit interactive calculator
 * and informs user of invalid choice
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int choice;
	int A;
	int B;
	int result;

	printf("Welcome to the Simple Calculator!\n");
	printf("1) Add\n");
	printf("2) Subtract\n");
	printf("3) Multiply\n");
	printf("4) Divide\n");
	printf("0) Quit\n");
	printf("Choice: \n");

	scanf("%d", &choice);
	if (choice == 0)
	{
		printf("Bye!\n");
		return (0);
	}
	else if (choice == 1)
	{
		printf("A: \n");
		scanf("%d", &A);
		printf("B: \n");
		scanf("%d", &B);
		result = A + B;
		printf("Result: %d\n", result);
	}
	else if (choice !=  2  && choice != 3 && choice != 4)
		printf("Invalid choice\n");
	return (0);
}
