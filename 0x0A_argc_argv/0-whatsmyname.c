#include <stdio.h>
#include "main.h"

/**
 * main - This prints the name of the program
 * @argc: Also counts the argument
 * @argv: The argument
 *
 * Return: On success 0.
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
