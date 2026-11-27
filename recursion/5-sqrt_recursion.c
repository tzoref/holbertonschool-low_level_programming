#include "main.h"
/**
 * find_root - Searches for an integer square root.
 * @n: The original number.
 * @candidate: The possible square root.
 *
 * Return: The square root, or -1 if none exists.
 */
int find_root(int n, int candidate)
{
	if ((long)candidate * candidate == n)
		return (candidate);
	if ((long)candidate * candidate > n)
		return (-1);

	return (find_root(n, candidate + 1));
}

/**
*_sqrt_recursion - Returns the square root of n.
* @n: The number whose square root is calculated.
*
* Return: The square root of n, or -1 on error.
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);

	return (find_root(n, 1));
}
