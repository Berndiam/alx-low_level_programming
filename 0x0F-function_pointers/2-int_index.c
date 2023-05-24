#include "function_pointers.h"
/**
* int_index - Returns the index place if comparison = true, else -1
* @array: The array
* @size: The size of elements in an array
* @cmp: Points to the function of one of the 3 in main
* Return: Should be 0.
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int f;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (f = 0; f < size; f++)
	{
		if (cmp(array[f]))
			return (f);
	}
	return (-1);
}
