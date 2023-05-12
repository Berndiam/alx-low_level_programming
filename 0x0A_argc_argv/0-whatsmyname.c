#include <stdio.h>
#include "main.h"


/**
 * main - The main prints the name of the program
 * @argc: Shows the number of arguments
 * @argv: Represents an array of argument.
 *
 * Return: On success 0.
 */

int main(int argc __attribute__((unused)), char *argv[])

{
	printf("%s\n", *argv);

	return (0);
}
