#include "main.h"
#include <unistd.h>

/**
 * _putchar - This writes the char c to stdout
 * @c: The char to print
 *
 * Return: On succes 1.
 * On error, -1 is returned, and errno is set correctly.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
