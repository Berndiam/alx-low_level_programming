#include <stdio.h>
#include "main.h"

/**
 * main - This prints the name of the program
 * @argc: Also counts the argument
 * @argv: The argument
 *
 * Return: On success 0.
 */

int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);

	return (0);
}
