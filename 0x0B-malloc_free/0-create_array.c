#include "main.h"
#include <stdlib.h>

/**
 * create_array - This creates the array of size and assign char c
 * @size: The size of arrays
 * @c: Char to assign
 * Description: This will create the array of size and assign char c
 * Return: Points to array, NULL if fail.
 *
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
