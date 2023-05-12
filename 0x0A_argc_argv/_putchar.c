#include <stdio.h>
#include "main.h"


/**
 * _putchar - This will write the char c to stdout
 * @: Shows the char to print
 *
 * Return: Should be 1 on success.
 * On error, -1 should be returned and errno is set right.
 */
		
int _putchar(char c)

{
	return (write(1, &c, 1));		
}
