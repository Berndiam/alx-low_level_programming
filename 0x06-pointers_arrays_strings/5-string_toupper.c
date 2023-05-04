#include "main.h"
/**
 * string_toupper - Changes all the lowercases to uppercases
 * @n: Pointers
 *
 * Return: Must be n
 */
char *string_toupper(char *n)
{
	int u;

	u = 0;
	while (n[u] != '\0')
	{
		if (n[u] >= 'a' && n[u] <= 'z')
			n[u] = n[u] - 32;
		u++;
	}
	return (n);
}
