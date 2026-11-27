#include "main.h"
/**
* _pow_recursion - Returns x raised to the power of y.
* @x: The number to be raised to the power.
* @y: The exponent.
*
* Return: The value of x raised to the power of y.
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
