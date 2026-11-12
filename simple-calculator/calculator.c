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
		else if (choice == 1 || choice == 2 || choice == 3 || choice == 4)
		{
			printf("A: \n");
			scanf("%d", &A);
			printf("B: \n");
			scanf("%d", &B);
			if (choice == 1)
			{
				result = A + B;
				printf("Result: %d\n", result);
			}
			else if (choice == 2)
			{
				result = A - B;
				printf("Result: %d\n", result);
			}
			else if (choice == 3)
			{
				result = A * B;
				printf("Result: %d\n", result);
			}
			else if (choice == 4)
			{
				if (B == 0)
					printf("Error: division by zero\n");
				else
				{
					result = A / B;
					printf("Result: %d\n", result);
				}
			}
		}
		else
			printf("Invalid choice\n");
	}
	return (0);
}
/**
 * menu - Prints interactive menu
 *
 * Description: Prints the interactive menu skeleton
 */
void menu(void)
{
	printf("1) Add\n");
	printf("2) Subtract\n");
	printf("3) Multiply\n");
	printf("4) Divide\n");
	printf("0) Quit\n");
}
