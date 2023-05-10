#include "main.h"

/**
 * _pow_recursion - Show the value of x raised to the power of y
 * @x: The value to raise
 * @y: The power
 *
 * Return: Display the results of power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
