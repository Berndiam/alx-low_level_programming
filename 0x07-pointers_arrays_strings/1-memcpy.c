#include "main.h"
/**
 *_memcpy - This function copies the memory area
 *@dest: Where the memory is stored.
 *@src: Where the memory is copied
 *@n: The number of bytes
 *
 *Return: Show the copied memory with n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
