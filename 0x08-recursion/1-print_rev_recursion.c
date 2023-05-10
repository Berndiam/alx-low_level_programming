#include "main.h"
/**
 * _print_rev_recursion - This prints string in a reverse.
 * @s: Shows the string to be printed
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
