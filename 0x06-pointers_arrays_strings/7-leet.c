#include "main.h"
/**
 * leet - Encode result into 1337speak
 * @n: Inputs the value
 * Return: The n value
 */
char *leet(char *n)
{
	int e, t;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (e = 0; n[e] != '\0'; e++)
	{
		for (t = 0; t < 10; t++)
		{
			if (n[e] == s1[t])
			{
				n[e] = s2[t];
			}
		}
	}
	return (n);
}
