#include "function_pointers.h"
/**
 * print_name - Prints a name.
 * @name: Name to be printed.
 * @f: Pointer to the function used to print the name.
 *
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
