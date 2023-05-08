#include "main.h"
#include <unistd.h>
/**
 * _putchar - This writes char c to the stdout
 * @c: The char to print
 *
 * Return: On success 1.
 * On error, returns -1, and the errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
