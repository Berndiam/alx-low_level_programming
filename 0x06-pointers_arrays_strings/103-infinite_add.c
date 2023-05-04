#include "main.h"

/**
 * rev_string - Reverse the arrays
 * @n: Integer params
 * Return: Will be 0
 */

void rev_string(char *n)
{
	int v = 0;
	int d = 0;
	char temp;

	while (*(n + v) != '\0')
	{
		v++;
	}
	v--;

	for (d = 0; d < v; d++, v--)
	{
		temp = *(n + d);
		*(n + d) = *(n + v);
		*(n + v) = temp;
	}
}

/**
 * infinite_add - This adds 2 numbers together
 * @n1: Text representation of the first number to add
 * @n2: Text representation of second number to add
 * @r: Pointer to buffer
 * @size_r: buffer size
 * Return: pointer to calling function
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int overflow = 0, v = 0, d = 0, digits = 0;
	int val1 = 0, val2 = 0, temp_tot = 0;

	while (*(n1 + v) != '\0')
		v++;
	while (*(n2 + d) != '\0')
		d++;
	v--;
	d--;
	if (d >= size_r || v >= size_r)
		return (0);
	while (d >= 0 || v >= 0 || overflow == 1)
	{
		if (v < 0)
			val1 = 0;
		else
			val1 = *(n1 + v) - '0';
		if (d < 0)
			val2 = 0;
		else
			val2 = *(n2 + d) - '0';
		temp_tot = val1 + val2 + overflow;
		if (temp_tot >= 10)
			overflow = 1;
		else
			overflow = 0;
		if (digits >= (size_r - 1))
			return (0);
		*(r + digits) = (temp_tot % 10) + '0';
		digits++;
		d--;
		v--;
	}
	if (digits == size_r)
		return (0);
	*(r + digits) = '\0';
	rev_string(r);
	return (r);
}
