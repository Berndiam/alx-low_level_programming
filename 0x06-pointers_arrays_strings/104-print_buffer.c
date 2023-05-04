#include "main.h"
#include <stdio.h>

/**
 * print_buffer - This prints buffer
 * @b: The buffer
 * @size: size
 * Return: Must be void
 */

void print_buffer(char *b, int size)
{
	int s, j, l;

	s = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (s < size)
	{
		j = size - s < 10 ? size - s : 10;
		printf("%08x: ", s);
		for (l = 0; l < 10; l++)
		{
			if (l < j)
				printf("%02x", *(b + s + l));
			else
				printf("  ");
			if (l % 2)
			{
				printf(" ");
			}
		}
		for (l = 0; l < j; l++)
		{
			int c = *(b + s + l);

			if (c < 32 || c > 132)
			{
				c = '.';
			}
			printf("%c", c);
		}
		printf("\n");
		s += 10;
	}
}
