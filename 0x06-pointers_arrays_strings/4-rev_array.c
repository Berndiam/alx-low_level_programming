#include "main.h"
/**
 * reverse_array - This reverses the array of integers
 * @a: Arrays
 * @n: The number of element of arrays
 *
 * Return: it should return void
 */
void reverse_array(int *a, int n)
{
	int y;
	int f;

	for (y = 0; y < n--; y++)
	{
		f = a[y];
		a[y] = a[n];
		a[n] = f;
	}
}
