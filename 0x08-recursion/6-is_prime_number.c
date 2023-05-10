#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - States if an integer is a prime number or not
 * @n: Shows the number to evaluate
 *
 * Return: Should be 1 if n is a prime number, and 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - This checks if a number is prime recursively
 * @n: The number to evaluate
 * @i: The iterator
 *
 * Return: If n is prime it should be 1, if not it should be 0
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
