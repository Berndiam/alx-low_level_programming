#include "main.h"
/**
 * _strncpy - Copying a string
 * @dest: Inputs the value
 * @src: Inputs value
 * @n: Should input the value
 *
 * Return: Must be dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int k;

	k = 0;
	while (k < n && src[k] != '\0')
	{
		dest[k] = src[k];
		k++;
	}
	while (k < n)
	{
		dest[k] = '\0';
		k++;
	}

	return (dest);
}
