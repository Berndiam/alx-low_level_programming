#include "main.h"
#include <stdio.h>

/**
 * rot13 - encode to rot13
 * @s: Points to the string params
 *
 * Return: Should be *s
 */

char *rot13(char *s)
{
	int w;
	int g;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (w = 0; s[w] != '\0'; w++)
	{
		for (g = 0; g < 52; g++)
		{
			if (s[w] == data1[g])
			{
				s[w] = datarot[g];
				break;
			}
		}
	}
	return (s);
}
