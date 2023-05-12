#include "main.h"
/**
 * _strncat - Concatenates the two strings
 * with the use of at most n bytes from src
 * @dest: The input value
 * @src: The input value
 * @n: Displays the input value
 *
 * Return: Should be dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int q;
	int o;

	q = 0;
	while (dest[q] != '\0')
	{
		q++;
	}
	o = 0;
	while (o < n && src[o] != '\0')
	{
	dest[q] = src[o];
	q++;
	o++;
	}
	dest[q] = '\0';
	return (dest);
}
