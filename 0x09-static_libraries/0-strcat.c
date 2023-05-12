#include "main.h"
/**
 * _strcat - compiles two strings
 * @dest: This inputs the value
 * @src: To input the value
 *
 * Return: Must return void
 */
char *_strcat(char *dest, char *src)
{
	int r;
	int b;

	r = 0;
	while (dest[r] != '\0')
	{
		r++;
	}
	b = 0;
	while (src[b] != '\0')
	{
		dest[r] = src[b];
		r++;
		b++;
	}

	dest[r] = '\0';
	return (dest);
}
