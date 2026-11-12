#include <stdio.h>
void menu(void);

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
	int A;
	int B;
	int result;

	choice = 9;
	printf("Welcome to the Simple Calculator!\n");
	while (choice != 0)
	{
		menu();
		printf("Choice: \n");
		scanf("%d", &choice);
		if (choice == 0)
		{
			printf("Bye!\n");
			return (0);
		}
		else if (choice != 2 && choice != 3 && choice != 4)
			printf("Invalid choice\n");
		else
		{
			printf("A: \n");
			scanf("%d", &A);
			printf("A: \n");
			scanf("%d", &B);
			if (choice == 1)
				result = A + B;
			else if (choice == 2)
				result = A - B;
			else if (choice == 3)
				result = A * B;
			printf("Result: %d\n", result);
		}
	}
	return (0);
}
void menu(void)
{
	printf("1) Add\n");
	printf("2) Subtract\n");
	printf("3) Multiply\n");
	printf("4) Divide\n");
	printf("0) Quit\n");
}
