#include "main.h"

/**
 * factorial - This return the factorial of a number
 * @n: Shows the num to return the factorial from
 *
 * Return: Must be the factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
