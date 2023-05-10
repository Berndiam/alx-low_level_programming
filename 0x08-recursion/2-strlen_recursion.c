#include "main.h"
/**
 * _strlen_recursion - Must return the length of a string.
 * @s: Display the string to be measured.
 *
 * Return: Should be the length of the string.
 */
int _strlen_recursion(char *s)
{
	int longit = 0;

	if (*s)
	{
		longit++;
		longit += _strlen_recursion(s + 1);
	}

	return (longit);
}
