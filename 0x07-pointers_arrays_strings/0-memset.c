#include "main.h"
/**
 * _memset - A specific value filled with a block of memory
 * @s: Starts with the address of memory to be filled
 * @b: The value desired
 * @n: Number of bytes to be changed
 *
 * Return: Should display the changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
