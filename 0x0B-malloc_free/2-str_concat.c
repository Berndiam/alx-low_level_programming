#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Compiles ends of input together for size
 * @s1: Inputs the one to add
 * @s2: Input two to concatenate
 * Return: The compilation of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	char *conct;
	int i, ci;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";
		i = ci = 0;

	while (s1[i] != '\0')
		i++;
	while (s2[ci] != '\0')
		ci++;

	conct = malloc(sizeof(char) * (i + ci + 1));

	if (conct == NULL)
		return (NULL);
	i = ci = 0;
	while (s1[i] != '\0')
	{
		conct[i] = s1[i];
		i++;
	}
	while (s2[ci] != '\0')
	{
		conct[i] = s2[ci];
		i++, ci++;
	}
	conct[i] = '\0';
	return (conct);
}
